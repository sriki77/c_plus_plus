find_package(GTest REQUIRED)
find_library(GMOCK_LIB libgmock.dylib)
find_path(GMOCK_INC gmock/gmock.h)

include_directories(${GMOCK_INC})
include_directories(${GTEST_INCLUDE_DIRS})


file(GLOB_RECURSE TEST_FILES "*Test.cc") 
add_executable(cpp_ccn_tests ${TEST_FILES})
target_link_libraries(cpp_ccn_tests ${CPP_CCN_OBJ} ${GTEST_BOTH_LIBRARIES} ${GMOCK_LIB} pthread)
add_test(cpp_ccn_tests cpp_ccn_tests)

