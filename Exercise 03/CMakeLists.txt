cmake_minimum_required(VERSION 3.1)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(task2 Task2/Circle.cpp)
add_executable(task3 Task3/main.cpp Task3/commodity.hpp)
add_executable(task4 Task4/main.cpp)