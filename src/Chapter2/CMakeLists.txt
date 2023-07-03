cmake_minimum_required(VERSION 3.11)
project(Chapter2)
include(../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME}_program program.cpp fibonacci.cpp)
add_executable(${PROJECT_NAME}_test test.cpp fibonacci.cpp)
target_link_libraries(
    ${PROJECT_NAME}_test
    GTest::gtest
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)
