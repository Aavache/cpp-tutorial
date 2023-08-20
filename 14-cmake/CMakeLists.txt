cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Collect all source files in the current directory
file(GLOB SOURCES "*.cpp")

# Include the header files directory
include_directories(${CMAKE_SOURCE_DIR})

# Create an executable with the collected source files
add_executable(MyApp ${SOURCES})