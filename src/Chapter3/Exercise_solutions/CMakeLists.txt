cmake_minimum_required(VERSION 3.11)
project(Chapter3_solutions)
include(../../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME} a_test_display_function.cpp ../employee.cpp ../employee_table.cpp)
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
