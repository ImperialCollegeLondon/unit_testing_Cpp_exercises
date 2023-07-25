cmake_minimum_required(VERSION 3.11)
project(Chapter2_solutions)
include(../../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME} exercise_solution.cpp fibonacci.cpp)
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
