include(cmake/SystemLink.cmake)
include(CMakeDependentOption)
include(CheckCXXCompilerFlag)


macro(AzQt_supports_sanitizers)
  if((CMAKE_CXX_COMPILER_ID MATCHES ".*Clang.*" OR CMAKE_CXX_COMPILER_ID MATCHES ".*GNU.*") AND NOT WIN32)
    set(SUPPORTS_UBSAN ON)
  else()
    set(SUPPORTS_UBSAN OFF)
  endif()

  if((CMAKE_CXX_COMPILER_ID MATCHES ".*Clang.*" OR CMAKE_CXX_COMPILER_ID MATCHES ".*GNU.*") AND WIN32)
    set(SUPPORTS_ASAN OFF)
  else()
    set(SUPPORTS_ASAN ON)
  endif()
endmacro()

macro(AzQt_setup_options)
  option(AzQt_ENABLE_HARDENING "Enable hardening" ON)
  option(AzQt_ENABLE_COVERAGE "Enable coverage reporting" OFF)
  cmake_dependent_option(
    AzQt_ENABLE_GLOBAL_HARDENING
    "Attempt to push hardening options to built dependencies"
    ON
    AzQt_ENABLE_HARDENING
    OFF)

  AzQt_supports_sanitizers()

  if(NOT PROJECT_IS_TOP_LEVEL OR AzQt_PACKAGING_MAINTAINER_MODE)
    option(AzQt_ENABLE_IPO "Enable IPO/LTO" OFF)
    option(AzQt_WARNINGS_AS_ERRORS "Treat Warnings As Errors" OFF)
    option(AzQt_ENABLE_USER_LINKER "Enable user-selected linker" OFF)
    option(AzQt_ENABLE_SANITIZER_ADDRESS "Enable address sanitizer" OFF)
    option(AzQt_ENABLE_SANITIZER_LEAK "Enable leak sanitizer" OFF)
    option(AzQt_ENABLE_SANITIZER_UNDEFINED "Enable undefined sanitizer" OFF)
    option(AzQt_ENABLE_SANITIZER_THREAD "Enable thread sanitizer" OFF)
    option(AzQt_ENABLE_SANITIZER_MEMORY "Enable memory sanitizer" OFF)
    option(AzQt_ENABLE_UNITY_BUILD "Enable unity builds" OFF)
    option(AzQt_ENABLE_CLANG_TIDY "Enable clang-tidy" OFF)
    option(AzQt_ENABLE_CPPCHECK "Enable cpp-check analysis" OFF)
    option(AzQt_ENABLE_PCH "Enable precompiled headers" OFF)
    option(AzQt_ENABLE_CACHE "Enable ccache" OFF)
  else()
    option(AzQt_ENABLE_IPO "Enable IPO/LTO" ON)
    option(AzQt_WARNINGS_AS_ERRORS "Treat Warnings As Errors" ON)
    option(AzQt_ENABLE_USER_LINKER "Enable user-selected linker" OFF)
    option(AzQt_ENABLE_SANITIZER_ADDRESS "Enable address sanitizer" ${SUPPORTS_ASAN})
    option(AzQt_ENABLE_SANITIZER_LEAK "Enable leak sanitizer" OFF)
    option(AzQt_ENABLE_SANITIZER_UNDEFINED "Enable undefined sanitizer" ${SUPPORTS_UBSAN})
    option(AzQt_ENABLE_SANITIZER_THREAD "Enable thread sanitizer" OFF)
    option(AzQt_ENABLE_SANITIZER_MEMORY "Enable memory sanitizer" OFF)
    option(AzQt_ENABLE_UNITY_BUILD "Enable unity builds" OFF)
    option(AzQt_ENABLE_CLANG_TIDY "Enable clang-tidy" ON)
    option(AzQt_ENABLE_CPPCHECK "Enable cpp-check analysis" ON)
    option(AzQt_ENABLE_PCH "Enable precompiled headers" OFF)
    option(AzQt_ENABLE_CACHE "Enable ccache" ON)
  endif()

  if(NOT PROJECT_IS_TOP_LEVEL)
    mark_as_advanced(
      AzQt_ENABLE_IPO
      AzQt_WARNINGS_AS_ERRORS
      AzQt_ENABLE_USER_LINKER
      AzQt_ENABLE_SANITIZER_ADDRESS
      AzQt_ENABLE_SANITIZER_LEAK
      AzQt_ENABLE_SANITIZER_UNDEFINED
      AzQt_ENABLE_SANITIZER_THREAD
      AzQt_ENABLE_SANITIZER_MEMORY
      AzQt_ENABLE_UNITY_BUILD
      AzQt_ENABLE_CLANG_TIDY
      AzQt_ENABLE_CPPCHECK
      AzQt_ENABLE_COVERAGE
      AzQt_ENABLE_PCH
      AzQt_ENABLE_CACHE)
  endif()
endmacro()

macro(AzQt_global_options)
  if(AzQt_ENABLE_IPO)
    include(cmake/InterproceduralOptimization.cmake)
    # AzQt_enable_ipo()
  endif()

  AzQt_supports_sanitizers()

  if(AzQt_ENABLE_HARDENING AND AzQt_ENABLE_GLOBAL_HARDENING)
    include(cmake/Hardening.cmake)
    if(NOT SUPPORTS_UBSAN 
       OR AzQt_ENABLE_SANITIZER_UNDEFINED
       OR AzQt_ENABLE_SANITIZER_ADDRESS
       OR AzQt_ENABLE_SANITIZER_THREAD
       OR AzQt_ENABLE_SANITIZER_LEAK)
      set(ENABLE_UBSAN_MINIMAL_RUNTIME FALSE)
    else()
      set(ENABLE_UBSAN_MINIMAL_RUNTIME TRUE)
    endif()
    message("${AzQt_ENABLE_HARDENING} ${ENABLE_UBSAN_MINIMAL_RUNTIME} ${AzQt_ENABLE_SANITIZER_UNDEFINED}")
    AzQt_enable_hardening(AzQt_options ON ${ENABLE_UBSAN_MINIMAL_RUNTIME})
  endif()
endmacro()

macro(AzQt_local_options)
  if(PROJECT_IS_TOP_LEVEL)
    include(cmake/StandardProjectSettings.cmake)
  endif()

  add_library(AzQt_warnings INTERFACE)
  add_library(AzQt_options INTERFACE)

  include(cmake/CompilerWarnings.cmake)
  AzQt_set_project_warnings(
    AzQt_warnings
    ${AzQt_WARNINGS_AS_ERRORS}
    ""
    ""
    ""
    "")

  if(AzQt_ENABLE_USER_LINKER)
    include(cmake/Linker.cmake)
    configure_linker(AzQt_options)
  endif()

  include(cmake/Sanitizers.cmake)
  AzQt_enable_sanitizers(
    AzQt_options
    ${AzQt_ENABLE_SANITIZER_ADDRESS}
    ${AzQt_ENABLE_SANITIZER_LEAK}
    ${AzQt_ENABLE_SANITIZER_UNDEFINED}
    ${AzQt_ENABLE_SANITIZER_THREAD}
    ${AzQt_ENABLE_SANITIZER_MEMORY})

  set_target_properties(AzQt_options PROPERTIES UNITY_BUILD ${AzQt_ENABLE_UNITY_BUILD})

  if(AzQt_ENABLE_PCH)
    target_precompile_headers(
      AzQt_options
      INTERFACE
      <vector>
      <string>
      <utility>)
  endif()

  if(AzQt_ENABLE_CACHE)
    include(cmake/Cache.cmake)
    AzQt_enable_cache()
  endif()

  include(cmake/StaticAnalyzers.cmake)
  if(AzQt_ENABLE_CLANG_TIDY)
    AzQt_enable_clang_tidy(AzQt_options ${AzQt_WARNINGS_AS_ERRORS})
  endif()

  if(AzQt_ENABLE_CPPCHECK)
    AzQt_enable_cppcheck(${AzQt_WARNINGS_AS_ERRORS} "" # override cppcheck options
    )
  endif()

  if(AzQt_ENABLE_COVERAGE)
    include(cmake/Tests.cmake)
    AzQt_enable_coverage(AzQt_options)
  endif()

  if(AzQt_WARNINGS_AS_ERRORS)
    check_cxx_compiler_flag("-Wl,--fatal-warnings" LINKER_FATAL_WARNINGS)
    if(LINKER_FATAL_WARNINGS)
      # This is not working consistently, so disabling for now
      # target_link_options(AzQt_options INTERFACE -Wl,--fatal-warnings)
    endif()
  endif()

  if(AzQt_ENABLE_HARDENING AND NOT AzQt_ENABLE_GLOBAL_HARDENING)
    include(cmake/Hardening.cmake)
    if(NOT SUPPORTS_UBSAN 
       OR AzQt_ENABLE_SANITIZER_UNDEFINED
       OR AzQt_ENABLE_SANITIZER_ADDRESS
       OR AzQt_ENABLE_SANITIZER_THREAD
       OR AzQt_ENABLE_SANITIZER_LEAK)
      set(ENABLE_UBSAN_MINIMAL_RUNTIME FALSE)
    else()
      set(ENABLE_UBSAN_MINIMAL_RUNTIME TRUE)
    endif()
    AzQt_enable_hardening(AzQt_options OFF ${ENABLE_UBSAN_MINIMAL_RUNTIME})
  endif()

endmacro()
