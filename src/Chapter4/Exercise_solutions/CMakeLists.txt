cmake_minimum_required(VERSION 3.11)
project(Chapter4_solutions)
include(../../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME} a_param_test_normal_function.cpp)
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
