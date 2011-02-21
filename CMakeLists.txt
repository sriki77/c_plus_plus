cmake_minimum_required(VERSION 2.6.4)
ENABLE_TESTING()
project(cpp_lab CXX)

set(INC_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(TEST_DIR ${CMAKE_SOURCE_DIR}/test)

include_directories("${INC_DIR}")

add_subdirectory(src)
add_subdirectory(test)




