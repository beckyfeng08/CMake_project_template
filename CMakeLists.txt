cmake_minimum_required(VERSION 3.31.0) # required in every project. Specify minimum version of CMake required
project(my_project) # required in every project. This sets the alias PROJECT_NAME to my_project

# assigning variables some folder paths (local paths wrt CMAKE_PROJECT_TEMPLATE)
set(source_folder src/)

# creating the executable program
add_executable(${PROJECT_NAME} ${source_folder}/main.cpp)

# adding libraries
    # link this project to our library. 
target_link_libraries(${PROJECT_NAME} mymath)
add_subdirectory(my_libs/) # consider my_libs as a directory to look into

message("Done") # essentially functions as a print statement
