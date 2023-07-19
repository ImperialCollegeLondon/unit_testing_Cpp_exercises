cmake_minimum_required(VERSION 3.11)
project(Chapter3)
include(../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME}_1_employeetest 1_employeetest.cpp employee.cpp)
add_executable(${PROJECT_NAME}_2_employeetest 2_employeetest.cpp employee.cpp)
add_executable(${PROJECT_NAME}_3_emp_table_test 3_emp_table_test.cpp employee.cpp employee_table.cpp)
add_executable(${PROJECT_NAME}_4_table_test_with_setup 4_table_test_with_setup.cpp employee.cpp employee_table.cpp)
target_link_libraries(
    ${PROJECT_NAME}_1_employeetest
    GTest::gtest_main
)
target_link_libraries(
    ${PROJECT_NAME}_2_employeetest
    GTest::gtest_main
)
target_link_libraries(
    ${PROJECT_NAME}_3_emp_table_test
    GTest::gtest_main
)
target_link_libraries(
    ${PROJECT_NAME}_4_table_test_with_setup
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_1_employeetest)
gtest_discover_tests(${PROJECT_NAME}_2_employeetest)
gtest_discover_tests(${PROJECT_NAME}_3_emp_table_test)
gtest_discover_tests(${PROJECT_NAME}_4_table_test_with_setup)
