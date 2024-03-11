# Find all source files in AzCore directory
file(GLOB_RECURSE AZCORE_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzCore/*.cpp"
)

# Find all header files in AzCore directory
file(GLOB_RECURSE AZCORE_HEADER_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/AzCore/*.h"
)

# Add AzCore library
add_library(AzCore SHARED ${AZCORE_SOURCE_FILES} ${AZCORE_HEADER_FILES})

# Set target properties
target_include_directories(AzCore
    PRIVATE AzCore
)


include("${CMAKE_CURRENT_SOURCE_DIR}/Platform/${PAL_PLATFORM_NAME}/platform_${PAL_PLATFORM_NAME_LOWERCASE}_files.cmake")

# Set platform-specific files
if(PAL_PLATFORM_NAME)
    set(PAL_PLATFORM_NAME_LOWERCASE ${PAL_PLATFORM_NAME} CACHE INTERNAL "")
    set(PAL_PLATFORM_FILES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/AzCore/Platform/${PAL_PLATFORM_NAME}")
    set(PAL_PLATFORM_FILES_CMAKE "${PAL_PLATFORM_FILES_DIR}/platform_${PAL_PLATFORM_NAME_LOWERCASE}_files.cmake")
    set(PAL_PLATFORM_INCLUDE_FILE "${CMAKE_CURRENT_SOURCE_DIR}/Platform/${PAL_PLATFORM_NAME}/platform_${PAL_PLATFORM_NAME_LOWERCASE}.cmake")

    target_sources(AzCore
        PRIVATE ${PAL_PLATFORM_FILES_CMAKE}
    )

    target_include_directories(AzCore
        PRIVATE ${PAL_PLATFORM_FILES_DIR}
    )

    target_compile_definitions(AzCore
        PRIVATE PAL_PLATFORM_NAME=${PAL_PLATFORM_NAME}
    )
endif()