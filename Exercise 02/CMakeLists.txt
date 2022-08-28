cmake_minimum_required(VERSION 3.1)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(task1a Task1/a/main.cpp)
add_executable(task1b Task1/b/main.cpp)
add_executable(task4 Task4/main.cpp)
add_executable(task5 Task5/main.cpp)
add_executable(task6 Task6/main.cpp)