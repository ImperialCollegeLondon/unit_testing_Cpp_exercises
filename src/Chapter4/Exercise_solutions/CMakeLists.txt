cmake_minimum_required(VERSION 3.11)
project(Chapter4_solutions)
include(../../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME}_a_param_test_normal_function a_param_test_normal_function.cpp)
add_executable(${PROJECT_NAME}_b_multiple_test_p_instant b_multiple_test_p_instant.cpp)
target_link_libraries(
    ${PROJECT_NAME}_a_param_test_normal_function
    GTest::gtest_main
)
target_link_libraries(
    ${PROJECT_NAME}_b_multiple_test_p_instant
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_a_param_test_normal_function)
gtest_discover_tests(${PROJECT_NAME}_b_multiple_test_p_instant)
