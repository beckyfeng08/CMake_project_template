# add a library. This script will generate a file ending with .a
# STATIC links libraries at compile-time, 
# SHARED links libraries at run-time
add_library(mymath STATIC my_math.cpp)

target_include_directories(mymath
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}) # look in the current directory to find the library