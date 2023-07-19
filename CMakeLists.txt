cmake_minimum_required(VERSION 3.11)
project(UnitTestingCppExercises)
include(cmake/UnitTestingCourseCommon.cmake)

# Add examples
add_subdirectory(src/Chapter2)
add_subdirectory(src/Chapter3)
add_subdirectory(src/Chapter4)

# Add solutions to exercises
add_subdirectory(src/Chapter2/Exercise_solutions)
add_subdirectory(src/Chapter3/Exercise_solutions)
add_subdirectory(src/Chapter4/Exercise_solutions)
