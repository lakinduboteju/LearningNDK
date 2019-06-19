cmake_minimum_required(VERSION 3.4.1)

add_library(A STATIC A.cpp)

target_link_libraries(A PRIVATE B)
