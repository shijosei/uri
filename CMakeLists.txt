cmake_minimum_required(VERSION 3.0.0)
project(aufgabe1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0")

add_executable(aufgabe1 uri.cpp)
