cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(AzQtComponents)

list(APPEND CMAKE_PREFIX_PATH "C:/Qt/5.15.2/msvc2019_64/lib/cmake/Qt5")

include("./FindQt.cmake")

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Find all header files in AzCore directory
file(GLOB_RECURSE AZCORE_HEADER_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/../AzCore/*.h"
)
# include_directories(${AZCORE_HEADER_FILES})

file(GLOB_RECURSE AZQTCOMPONENTS_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/*.cpp"
)

# Find all header files in AzComponents directory
file(GLOB_RECURSE AZQTCOMPONENTS_HEADER_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/*.h"
)
# include_directories(${AZQTCOMPONENTS_HEADER_FILES})

# Add your platform-specific source files here
set(platform_sources
    "${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/Platform/${PAL_PLATFORM_NAME}/*.cpp"
)

set(PAL_PLATFORM_NAME "Windows")
set(PAL_PLATFORM_NAME_LOWERCASE "windows")
# Set platform-specific files
set(PAL_PLATFORM_FILES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Platform/${PAL_PLATFORM_NAME}")
set(PAL_PLATFORM_FILES_CMAKE "${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/Platform/${PAL_PLATFORM_NAME}/platform_${PAL_PLATFORM_NAME_LOWERCASE}_files.cmake")
# Set the included CMake file as the platform_sources variable
set(platform_sources ${platform_${PAL_PLATFORM_NAME_LOWERCASE}_files})
add_library(
    AzQtComponents SHARED
    ${AZQTCOMPONENTS_SOURCE_FILES}
    ${AZQTCOMPONENTS_HEADER_FILES}
    ${platform_sources}
)

target_include_directories(
    AzQtComponents
    PRIVATE
        ${PAL_PLATFORM_FILES_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../AzCore
        AzQtComponents
    PUBLIC
        ${AZQTCOMPONENTS_HEADER_FILES}
        .
)
target_sources(AzQtComponents
    PRIVATE ${PAL_PLATFORM_FILES_CMAKE}
)

target_link_libraries(
    AzQtComponents
    PRIVATE
        # Az::AzCore
        Qt::Core
        Qt::Gui
        Magnification
    PUBLIC
        Qt::Widgets
        Qt::Svg
        Qt::Xml
)

#################################### EXECUTABLE ###############################
file(GLOB SOURCE_FILES "*.cpp" "*.qrc" "*.h" "*.ui" "*.png")

add_executable(
    AzQtGallery
    ${AZQTCOMPONENTS_SOURCE_FILES}
    ${AZQTCOMPONENTS_HEADER_FILES}
    ${AZCORE_HEADER_FILES}
    ${SOURCE_FILES}
)

target_include_directories(
    AzQtGallery
    PRIVATE
        .
        AzQtComponents
        AzQtComponents/Gallery
)

target_link_libraries(
    AzQtGallery
    PRIVATE
        Qt::Core
        Qt::Gui
        Qt::Svg
        Qt::Widgets
        # Az::AzQtComponents
)