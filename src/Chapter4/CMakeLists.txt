cmake_minimum_required(VERSION 3.11)
project(Chapter4)
include(../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME}_1_not_parameterised 1_not_parameterised.cpp employee.cpp)
add_executable(${PROJECT_NAME}_2_test_using_for_loop 2_test_using_for_loop.cpp employee.cpp)
add_executable(${PROJECT_NAME}_3_parameterised_not_using_fixture 3_parameterised_not_using_fixture.cpp employee.cpp)
add_executable(${PROJECT_NAME}_4_param_test_based_fixture 4_param_test_based_fixture.cpp employee.cpp)
target_link_libraries(
    ${PROJECT_NAME}_1_not_parameterised
    GTest::gtest_main
)
target_link_libraries(
    ${PROJECT_NAME}_2_test_using_for_loop
    GTest::gtest_main
)
target_link_libraries(
    ${PROJECT_NAME}_3_parameterised_not_using_fixture
    GTest::gtest_main
)
target_link_libraries(
    ${PROJECT_NAME}_4_param_test_based_fixture
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_1_not_parameterised)
gtest_discover_tests(${PROJECT_NAME}_2_test_using_for_loop)
gtest_discover_tests(${PROJECT_NAME}_3_parameterised_not_using_fixture)
gtest_discover_tests(${PROJECT_NAME}_4_param_test_based_fixture)
