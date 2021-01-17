# CMake Example Project

This repository includes an example `CMake` project to build and test a shared library. This project uses the `GTest` suite for unit testing.

## Basic requirements

  - *CMake* (>= 3.10)
  - compiler suite for `C++`. Tested with:
    - Visual Studio compiler `MSVC` (>= VS2015)
    - GNU compiler `gcc` (>= 8.3.0)

## Generate and build project

Run the following commands in the project root folder:

```bash
# Create binary folder and change into
mkdir build
cd build/

# Generate project files
cmake ..

# Build project
make
```
For more detailed information about generating and building project with *CMake*, read the official documentation:

[https://cmake.org/cmake/help/latest/manual/cmake.1.html]()

To use the *CMake* example project with **Visual Studio**, refer to the offical documention:

[https://docs.microsoft.com/en-us/cpp/build/cmake-projects-in-visual-studio?view=msvc-160]()

### Run unit tests

During the *CMake* generation step, the `GTest` framework will be downloaded and configured.

After successful compilation of the library, the tests can simply be run with the `$ ctest` command from the binary directory.

Refer to the official documentation for more information about unit testing:

[https://cmake.org/cmake/help/latest/manual/ctest.1.html]()

### Build library examples

Build the library examples with the build target `examples`.

e.g. with *make*
```bash
make examples
```

## Library versioning

The library version is defined in the root `CMakeLists.txt` inside the *CMake* `project(... VERSION major.minor.patch)` call on top of the file.

On project generation the version and build information is written into the *CMake* build directory (usually `build/version.h`).

Simply use it by including this file on top of your `C++` file where you want to use it:

```c++
#include "version.h"
```

As this version file is not configured as *PUBLIC* header file, use the *include* only in source files or private header files.

As example the `Meta` class is implemented to access the version information programmatically:

  - Public header file: `include/my/example/Meta.h`
  - Library source file: `lib/my/example/Meta.cpp`

## Use example project as template for own library project

This intendation is not only to show an example project. It is also meant to be used as template for your own `C++` library project.

The file and folder structure is described here:

  - `./` - root folder

    - `CMakeLists.txt`  
       The main *CMake* project file. Define your library name here and change project specific configurations.

       Change the library version here.

    - `CMakeLists.gtest.in`  
      Included from the main project file to add the *GTest* framework. In most cases no adaptions are needed.

  - `examples/`

    Place your project example code snippets here and add an executable target to the `examples/CMakeLists.txt` file.

  - `include/`

    Place the public library headers here

  - `lib/`

    Place the library source files here and the private header files.

  - `resources/`

    Place some project specific source files here.

  - `tests/`

    Unit test files are searched recursively under the `src/` subfolder and must match the following filename pattern:

    ```
    UTest_*.cpp
    ```
## Helpful links

  - TODO
