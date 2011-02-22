set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/Modules/")

find_package(GTest REQUIRED)
find_package(GMock REQUIRED)

include_directories(${GMOCK_INC})
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB_RECURSE TEST_FILES "*Test.cc") 
add_executable(cpp_ccn_tests ${TEST_FILES})
target_link_libraries(cpp_ccn_tests ${CPP_CCN_OBJ} ${GTEST_BOTH_LIBRARIES} pthread)
add_test(cpp_ccn_tests cpp_ccn_tests)


