cmake_minimum_required(VERSION 3.11)
project(Chapter5)
include(../../cmake/UnitTestingCourseCommon.cmake)

add_executable(${PROJECT_NAME}_exercise_with_mocks exercise_with_mocks.cpp)
target_link_libraries(
    ${PROJECT_NAME}_exercise_with_mocks
    GTest::gtest_main
    GTest::gmock
)
add_executable(${PROJECT_NAME}_test_dependency_injection test_dependency_injection.cpp)
target_link_libraries(
    ${PROJECT_NAME}_test_dependency_injection
    GTest::gtest_main
)
add_executable(${PROJECT_NAME}_test_mock_and_spy_template test_mock_and_spy_template.cpp)
target_link_libraries(
    ${PROJECT_NAME}_test_mock_and_spy_template
    GTest::gtest_main
    GTest::gmock
)
add_executable(${PROJECT_NAME}_test_mock_and_spy_virtual test_mock_and_spy_virtual.cpp)
target_link_libraries(
    ${PROJECT_NAME}_test_mock_and_spy_virtual
    GTest::gtest_main
    GTest::gmock
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_exercise_with_mocks)
gtest_discover_tests(${PROJECT_NAME}_test_dependency_injection)
gtest_discover_tests(${PROJECT_NAME}_test_mock_and_spy_template)
gtest_discover_tests(${PROJECT_NAME}_test_mock_and_spy_virtual)
