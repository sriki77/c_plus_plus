cmake_minimum_required(VERSION 2.8)
ENABLE_TESTING()
project(cpp_ccn CXX)


set(CCN_COVERAGE "-O0 -pg -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CCN_COVERAGE}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CCN_COVERAGE}")
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage -lgcov")


set(INC_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(TEST_DIR ${CMAKE_SOURCE_DIR}/test)
set(CPP_CCN_OBJ cpp_ccn)
include_directories("${INC_DIR}")

add_subdirectory(src)
add_subdirectory(test)

# add lcov target
include(${CMAKE_SOURCE_DIR}/cmake/lcov.cmake)

