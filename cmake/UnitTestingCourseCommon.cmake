# Common CMake stuff to be used by different chapters. To make your own CMake project,
# you will need to have this (or something similar) in your CMakeLists.txt file.

# Stop this file being included more than once
include_guard(GLOBAL)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable compiler warnings and standard conformance
if(MSVC)
    add_compile_options(/W4 /permissive-)

    if(WARNINGS_AS_ERRORS)
        add_compile_options(/WX)
    endif()
else()
    add_compile_options(-Wall -Wextra -Wpedantic)

    if(WARNINGS_AS_ERRORS)
        add_compile_options(-Werror)
    endif()
endif()

enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.13.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
