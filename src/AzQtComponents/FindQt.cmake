#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
#
# SPDX-License-Identifier: Apache-2.0 OR MIT
#
#

if(TARGET Qt::Core) # Check we are not called multiple times
    return()
endif()

set(Qt_DIR "C:/Qt/5.15.2/msvc2019_64")
set(QT_PATH "${Qt_DIR}" CACHE STRING "The root path to Qt" FORCE)
set(QT_LIB_PATH ${QT_PATH}/lib)

if(NOT EXISTS ${QT_PATH})
    message(FATAL_ERROR "Cannot find Qt on path ${QT_PATH}")
endif()

# Force-set QtCore's version here to ensure CMake detects Qt's existence and allows AUTOMOC to work
set(Qt5Core_VERSION_MAJOR "5" CACHE STRING "Qt's major version" FORCE)
set(Qt5Core_VERSION_MINOR "15" CACHE STRING "Qt's minor version" FORCE)
set(Qt5Core_VERSION_PATCH "2" CACHE STRING "Qt's patch version" FORCE)
mark_as_advanced(Qt5Core_VERSION_MAJOR)
mark_as_advanced(Qt5Core_VERSION_MINOR)
mark_as_advanced(Qt5Core_VERSION_PATCH)

set(QT5_COMPONENTS
    Core
    Concurrent
    Gui
    LinguistTools
    Network
    OpenGL
    Svg
    Test
    Widgets
    Xml
)

list(APPEND CMAKE_PREFIX_PATH ${QT_LIB_PATH}/cmake/Qt5)

# Clear the cache for found DIRs
unset(Qt5_DIR CACHE)
foreach(component ${QT5_COMPONENTS})
    unset(Qt5${component}_DIR CACHE)
endforeach()
unset(Qt5Positioning_DIR CACHE)
unset(Qt5PrintSupport_DIR CACHE)
unset(Qt5Qml_DIR CACHE)
unset(Qt5QmlModels_DIR CACHE)
unset(Qt5Quick_DIR CACHE)

# Populate the Qt5 configurations
find_package(Qt5
    COMPONENTS ${QT5_COMPONENTS}
    REQUIRED
    NO_CMAKE_PACKAGE_REGISTRY 
)


# Some extra DIR variables we want to hide from GUI
mark_as_advanced(Qt5_DIR) # Hiding from GUI
mark_as_advanced(Qt5LinguistTools_DIR) # Hiding from GUI, this variable comes from the LinguistTools module
mark_as_advanced(Qt5Positioning_DIR)
mark_as_advanced(Qt5PrintSupport_DIR)
mark_as_advanced(Qt5Qml_DIR)
mark_as_advanced(Qt5QmlModels_DIR)
mark_as_advanced(Qt5Quick_DIR)

# Qt plugins/translations/aux files. 
# We create libraries that wraps them so they get deployed properly.
# This used to be deployed through winqtdeploy/macqtdeploy, however, those tools
# are old and unmaintaned, macqtdeploy takes long times to run
add_library(Qt::Core::Translations INTERFACE IMPORTED GLOBAL)

# plugins, each platform will define the files it has and the OUTPUT_SUBDIRECTORY
set(QT_PLUGINS
    Network
    Gui
    Widgets
)
foreach(plugin ${QT_PLUGINS})
    add_library(Qt::${plugin}::Plugins INTERFACE IMPORTED GLOBAL)
    # ly_add_dependencies(Qt5::${plugin} Qt::${plugin}::Plugins)
endforeach()
# include(${CMAKE_CURRENT_LIST_DIR}/Platform/${PAL_PLATFORM_NAME}/QtPlugin_${PAL_PLATFORM_NAME_LOWERCASE}.cmake)

# UIC executable
unset(QT_UIC_EXECUTABLE CACHE)
find_program(QT_UIC_EXECUTABLE uic HINTS "${QT_PATH}/bin")
mark_as_advanced(QT_UIC_EXECUTABLE) # Hiding from GUI

# RCC executable
unset(AUTORCC_EXECUTABLE CACHE)
find_program(AUTORCC_EXECUTABLE rcc HINTS "${QT_PATH}/bin")
mark_as_advanced(AUTORCC_EXECUTABLE) # Hiding from GUI
set(Qt5Core_RCC_EXECUTABLE "${AUTORCC_EXECUTABLE}" CACHE FILEPATH "Qt's resource compiler, used by qt5_add_resources" FORCE)
mark_as_advanced(Qt5Core_RCC_EXECUTABLE) # Hiding from GUI

# LRELEASE executable
unset(QT_LRELEASE_EXECUTABLE CACHE)
find_program(QT_LRELEASE_EXECUTABLE lrelease HINTS "${QT_PATH}/bin")
mark_as_advanced(QT_LRELEASE_EXECUTABLE) # Hiding from GUI
if(NOT QT_LRELEASE_EXECUTABLE)
    message(FATAL_ERROR "Qt's lrelease executbale not found")
endif()
set(Qt5_LRELEASE_EXECUTABLE "${QT_LRELEASE_EXECUTABLE}" CACHE FILEPATH "Qt's lrelease executable, used by qt5_add_translation" FORCE)
mark_as_advanced(Qt5_LRELEASE_EXECUTABLE) # Hiding from GUI

#! ly_qt_uic_target: handles qt's ui files by injecting uic generation
#
# AUTOUIC has issues to detect changes in UIC files and trigger regeneration:
# https://gitlab.kitware.com/cmake/cmake/-/issues/18741
# So instead, we are going to manually wrap the files. We dont use qt5_wrap_ui because
# it outputs to ${CMAKE_CURRENT_BINARY_DIR}/ui_${outfile}.h and we want to follow the
# same folder structure that AUTOUIC uses
#
function(ly_qt_uic_target TARGET)
    
    get_target_property(all_ui_sources ${TARGET} SOURCES)
    list(FILTER all_ui_sources INCLUDE REGEX "^.*\\.ui$")
    if(NOT all_ui_sources)
        message(FATAL_ERROR "Target ${TARGET} contains AUTOUIC but doesnt have any .ui file")
    endif()
    
    if(AUTOGEN_BUILD_DIR)
        set(gen_dir ${AUTOGEN_BUILD_DIR})
    else()
        set(gen_dir ${CMAKE_CURRENT_BINARY_DIR}/${TARGET}_autogen/include)
    endif()

    foreach(ui_source ${all_ui_sources})
        
        get_filename_component(filename ${ui_source} NAME_WE)
        get_filename_component(dir ${ui_source} DIRECTORY)
        if(IS_ABSOLUTE ${dir})
            file(RELATIVE_PATH dir ${CMAKE_CURRENT_SOURCE_DIR} ${dir})
        endif()

        set(outfolder ${gen_dir}/${dir})
        set(outfile ${outfolder}/ui_${filename}.h)
        get_filename_component(infile ${ui_source} ABSOLUTE)

        file(MAKE_DIRECTORY ${outfolder})
        add_custom_command(OUTPUT ${outfile}
          COMMAND ${QT_UIC_EXECUTABLE} -o ${outfile} ${infile}
          MAIN_DEPENDENCY ${infile} VERBATIM
          COMMENT "UIC ${infile}"
        )

        set_source_files_properties(${infile} PROPERTIES SKIP_AUTOUIC TRUE)
        set_source_files_properties(${outfile} PROPERTIES 
            SKIP_AUTOMOC TRUE
            SKIP_AUTOUIC TRUE
            GENERATED TRUE
        )
        list(APPEND all_ui_wrapped_sources ${outfile})

    endforeach()

    # Add files to the target
    target_sources(${TARGET} PRIVATE ${all_ui_wrapped_sources})
    source_group("Generated Files" FILES ${all_ui_wrapped_sources})

    # Add include directories relative to the generated folder
    # query for the property first to avoid the "NOTFOUND" in a list
    get_property(has_includes TARGET ${TARGET} PROPERTY INCLUDE_DIRECTORIES SET)
    if(has_includes)
        get_property(all_include_directories TARGET ${TARGET} PROPERTY INCLUDE_DIRECTORIES)
        foreach(dir ${all_include_directories})
            if(IS_ABSOLUTE ${dir})
                file(RELATIVE_PATH dir ${CMAKE_CURRENT_SOURCE_DIR} ${dir})
            endif()
            list(APPEND new_includes ${gen_dir}/${dir})
        endforeach()
    endif()
    list(APPEND new_includes ${gen_dir})
    target_include_directories(${TARGET} PRIVATE ${new_includes})

endfunction()

#! ly_add_translations: adds translations (ts) to a target.
#
# This wrapper will generate a qrc file with those translations and add the files under "prefix" and add them to
# the indicated targets. These files will be added under the "Generated Files" filter
#
# \arg:TARGETS name of the targets that the translations will be added to
# \arg:PREFIX prefix where the translation will be located within the qrc file
# \arg:FILES translation files to add
#
function(ly_add_translations)

    set(options)
    set(oneValueArgs PREFIX)
    set(multiValueArgs TARGETS FILES)

    cmake_parse_arguments(ly_add_translations "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    # Validate input arguments
    if(NOT ly_add_translations_TARGETS)
        message(FATAL_ERROR "You must provide at least one target")
    endif()
    if(NOT ly_add_translations_FILES)
        message(FATAL_ERROR "You must provide at least a translation file")
    endif()

    qt5_add_translation(TRANSLATED_FILES ${ly_add_translations_FILES})

    set(qrc_file_contents 
"<RCC>
    <qresource prefix=\"/${ly_add_translations_PREFIX}\">
")
    foreach(file ${TRANSLATED_FILES})
        get_filename_component(filename ${file} NAME)
        string(APPEND qrc_file_contents "        <file>${filename}</file>
")
    endforeach()
    string(APPEND qrc_file_contents "    </qresource>
</RCC>
")
    set(qrc_file_path ${CMAKE_CURRENT_BINARY_DIR}/i18n_${ly_add_translations_PREFIX}.qrc)
    file(WRITE 
        ${qrc_file_path}
        ${qrc_file_contents}
    )
    set_source_files_properties(
            ${TRANSLATED_FILES}
            ${qrc_file_path}
        PROPERTIES 
            GENERATED TRUE
            SKIP_AUTORCC TRUE
    )
    qt5_add_resources(RESOURCE_FILE ${qrc_file_path})

    foreach(target ${ly_add_translations_TARGETS})
        target_sources(${target} PRIVATE "${TRANSLATED_FILES};${qrc_file_path};${RESOURCE_FILE}")
    endforeach()

endfunction()
