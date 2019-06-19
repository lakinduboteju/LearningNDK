cmake_minimum_required(VERSION 3.4.1)

add_library(B STATIC B.cpp)

target_link_libraries(B PRIVATE C)
