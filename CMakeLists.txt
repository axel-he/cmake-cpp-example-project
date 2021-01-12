cmake_minimum_required(VERSION 3.10)

set(LIBRARY_NAME example) # <<< change library name here <<<

# -----------------------------------------------------------------------------
# Global project configuration
# -----------------------------------------------------------------------------
project(lib${LIBRARY_NAME} VERSION 1.0.0)

# create version header file
string(TIMESTAMP BUILD_DATE "%Y-%m-%d_%H%M%S")
configure_file(resources/version.h.in version.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
endif()

set(CMAKE_DEBUG_POSTFIX d)

# Assume release build output type if not defined (mostly for MSVC build)
if (CMAKE_BUILD_TYPE)
else()
    set(CMAKE_BUILD_TYPE "Release")
endif()

# overwrite build output directory
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# -----------------------------------------------------------------------------
# Library configuration
# -----------------------------------------------------------------------------
add_subdirectory(lib/) # import source-file list

add_library(${LIBRARY_NAME} SHARED ${LIB_SOURCES})

target_include_directories(${LIBRARY_NAME} PRIVATE lib/)
target_include_directories(${LIBRARY_NAME} PRIVATE ${CMAKE_BINARY_DIR})
target_include_directories(${LIBRARY_NAME} PUBLIC include/)

# set global include directories for project executables
include_directories(include/)

# -----------------------------------------------------------------------------
# Examples
# -----------------------------------------------------------------------------
add_subdirectory(examples/)
add_custom_target(examples COMMAND ${EXAMPLE_TARGET_LIST})
