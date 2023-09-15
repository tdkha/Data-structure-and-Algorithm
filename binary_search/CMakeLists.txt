cmake_minimum_required(VERSION 3.10)

project(binary_search)

add_executable(binary_search binary_search.cpp)
add_executable(bs_explain bs_explain.cpp)
add_executable(binary_exp binary_exp.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)