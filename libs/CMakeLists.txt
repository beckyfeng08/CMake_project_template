add_library(math my_math.cpp)
target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) 
# can be private 
# public
# interface - header files act as interfaces as users to the library