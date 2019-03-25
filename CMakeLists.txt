# Specify the minimum version

cmake_minimum_required(VERSION 2.8)

# Project Name
project(hello)

# Set the output folder
set(CMAKE_SOURCE_DIR src)
set(CMAKE_INCLUDE_DIR include)
set(CMAKE_BINARY_DIR bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Include folder
include_directories(${CMAKE_INCLUDE_DIR})

# Executables
add_executable(hello ${CMAKE_SOURCE_DIR}/main_test.cpp)


