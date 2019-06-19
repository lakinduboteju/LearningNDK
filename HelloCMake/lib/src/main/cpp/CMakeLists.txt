cmake_minimum_required(VERSION 3.4.1)

include_directories(Includes)

add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)
add_subdirectory(X)

add_library(Lib SHARED Lib.cpp)

target_link_libraries(Lib PRIVATE A)
target_link_libraries(Lib PRIVATE X)
