### 
### Define example executables here...

# Example 1
add_executable(PrintLibraryInfo EXCLUDE_FROM_ALL PrintLibraryInfo.cpp)
target_link_libraries(PrintLibraryInfo ${LIBRARY_NAME})
add_dependencies(PrintLibraryInfo ${LIBRARY_NAME})

# List of example targets
set(EXAMPLE_TARGET_LIST

    PrintLibraryInfo

    PARENT_SCOPE
)
