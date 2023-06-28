cmake_minimum_required(VERSION 3.11)
project(Chapter2)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.13.0
)
FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME}_program program.cpp fibonacci.cpp)
add_executable(${PROJECT_NAME}_test test.cpp fibonacci.cpp)
target_link_libraries(
    ${PROJECT_NAME}_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)
