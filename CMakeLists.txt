cmake_minimum_required(VERSION 3.17)
project(project2)

set(CMAKE_CXX_STANDARD 17)

add_executable(project2 main.cpp Heap.h heap_sort.cpp)