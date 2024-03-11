cmake_minimum_required(VERSION 3.21)

file(GLOB SOURCE_FILES "*.cpp" "*.qrc" "*.h" "*.ui" "*.png")

project(AzQtComponents)

list(APPEND CMAKE_PREFIX_PATH "C:/Qt/5.15.2/msvc2019_64/bin")
set(Qt_DIR "C:/Users/tolga.yilmaz/source/repos/o3de-packages/packages/qt-5.15.2-rev7-windows")
include ("C:/Users/tolga.yilmaz/source/repos/o3de-packages/packages/qt-5.15.2-rev7-windows/FindQt.cmake")
find_package(Qt REQUIRED COMPONENTS Core Gui Svg Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

file(GLOB_RECURSE AZQTCOMPONENTS_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/*.cpp"
)

# Find all header files in AzCore directory
file(GLOB_RECURSE AZQTCOMPONENTS_HEADER_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/*.h"
)

# Add your platform-specific source files here
# set(platform_sources
#     "${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/Platform/${PAL_PLATFORM_NAME}/*.cpp"
# )

include("${CMAKE_CURRENT_SOURCE_DIR}/AzQtComponents/Platform/${PAL_PLATFORM_NAME}/platform_${PAL_PLATFORM_NAME_LOWERCASE}_files.cmake")

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
        AzQtComponents
    PUBLIC
        .
)

target_compile_definitions(
    AzQtComponents
    PRIVATE
        AZ_QT_COMPONENTS_EXPORT_SYMBOLS
)

target_link_libraries(
    AzQtComponents
    PRIVATE
        3rdParty::Qt::Core
        3rdParty::Qt::Gui
    PUBLIC
        3rdParty::Qt::Widgets
        3rdParty::Qt::Svg
        3rdParty::Qt::Xml
        AZ::AzCore
)

add_executable(
    AzQtGallery
    ${AZQTCOMPONENTS_SOURCE_FILES}
    ${AZQTCOMPONENTS_HEADER_FILES}
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
        3rdParty::Qt::Core
        3rdParty::Qt::Gui
        3rdParty::Qt::Svg
        3rdParty::Qt::Widgets
        AZ::AzQtComponents
)
