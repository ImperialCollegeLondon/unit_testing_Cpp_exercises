# Accompanying code for Unit Testing C++ course

## Prerequisites

In order to run the examples in this repository, you need a C++ compiler (supporting
C++14 or newer) and CMake (version 3.11 or newer).

For this course, we will be using [GoogleTest], a popular and easy-to-use testing
framework. If you compile your code against the GoogleTest libraries, you will have a
test executable, which when run will execute your tests. CMake provides a convenient
tool called [CTest] for executing your project's tests (with whatever framework you are
using in a convenient manner), which also integrates with a variety of IDEs (see below).

On Ubuntu, you can install your dependencies like this:

```sh
sudo apt install build-essential cmake
```

On macOS, you can install them with [Homebrew](https://brew.sh/):

```sh
brew install cmake
```

If you are using Visual Studio on Windows, you do not require any additional
dependencies.

## Building projects from the command line

If you are doing this with Visual Studio on Windows, you will need to open the Visual
Studio Developer Shell for this step.

First, navigate to the project you wish to build, e.g.:

```sh
cd src/Chapter2
```

(If you wish to build all projects, you can just invoke CMake from the root directory of
this repository.)

Then you can build using CMake in the usual way:

```sh
cmake -B build
cmake --build build/
```

## Running tests from the command line

Once you have built your project, you can then run the tests by using [CTest], which is
a helper program bundled with CMake:

```sh
# Enter build directory
cd build

# Run CTest
ctest
```

## Building and testing projects with an IDE

Nowadays, many popular IDEs, including Visual Studio and Visual Studio Code, provide
built-in support for CMake and CTest and will automatically configure your project if a
CMakeLists.txt file is discovered in its root. For Visual Studio Code, you will need the
[CMake extension] installed.

[GoogleTest]: https://google.github.io/googletest/
[CTest]:
    https://cmake.org/cmake/help/book/mastering-cmake/chapter/Testing%20With%20CMake%20and%20CTest.html
[CMake extension]:
    https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools
