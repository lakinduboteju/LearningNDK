cmake_minimum_required(VERSION 3.4.1)

add_library(X SHARED X.cpp)

target_link_libraries(X PRIVATE B)
