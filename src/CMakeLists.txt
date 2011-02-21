file(GLOB_RECURSE SRC_FILES "*.cc") 
add_library(${CPP_CCN_OBJ} SHARED ${SRC_FILES})
