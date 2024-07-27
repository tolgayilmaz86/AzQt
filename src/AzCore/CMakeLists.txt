cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(AzCore)

# Find all source files in AzCore directory
file(GLOB_RECURSE AZCORE_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzCore/*.cpp"
)

# Find all header files in AzCore directory
file(GLOB_RECURSE AZCORE_HEADER_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzCore/*.h"
)

include_directories(${AZCORE_HEADER_FILES})

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Add AzCore library
add_library(AzCore STATIC ${AZCORE_SOURCE_FILES} ${AZCORE_HEADER_FILES})

# Set target properties
target_include_directories(AzCore
    PRIVATE AzCore
)
set(PAL_PLATFORM_NAME "Windows")
set(PAL_PLATFORM_NAME_LOWERCASE "windows")
# Set platform-specific files
set(PAL_PLATFORM_FILES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Platform/${PAL_PLATFORM_NAME}")
set(PAL_PLATFORM_FILES_CMAKE "${PAL_PLATFORM_FILES_DIR}/platform_${PAL_PLATFORM_NAME_LOWERCASE}_files.cmake")

target_sources(AzCore
    PRIVATE ${PAL_PLATFORM_FILES_CMAKE}
)

target_include_directories(AzCore
    PRIVATE 
        ${PAL_PLATFORM_FILES_DIR}
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        ${AZCORE_HEADER_FILES}
)