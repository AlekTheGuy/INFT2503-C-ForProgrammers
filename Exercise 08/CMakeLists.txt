cmake_minimum_required(VERSION 3.1)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(task1 Task1/main.cpp)
add_executable(task2 Task2/main.cpp)