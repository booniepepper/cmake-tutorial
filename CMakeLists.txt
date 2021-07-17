cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Greet VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# pass the version in to a .h file
configure_file(greet_config.h.in greet_config.h)

# add the executable
add_executable(greet greet.cpp)

# allow the dir to be searched for include files
target_include_directories(greet PUBLIC "${PROJECT_BINARY_DIR}")

