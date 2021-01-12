# CMake Example Project - `tests/` directory

 *GTest* is used as test framework. See [https://github.com/google/googletest](https://github.com/google/googletest) for more information about the usage.

## Add unit test

The unit test files are automatically detected under the `tests/src/` subdirectory of the project. The files must match the pattern `UTest_*.cpp`.

The unit test files can be organized in subdirectories, e.g.:  
`tests/src/foo/UTest_FooTest.cpp`
`tests/src/foo/bar/UTest_FooBarTest.cpp`
