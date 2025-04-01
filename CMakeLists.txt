cmake_minimum_required(VERSION 3.31.0)
project(my_project)
add_executable(${PROJECT_NAME} main.cpp)

find_package(OpenGL REQUIRED)
add_subdirectory(libs)
add_subdirectory(exts/glfw-3.4)

target_link_libraries(${PROJECT_NAME}  math glfw OpenGL::GL)
