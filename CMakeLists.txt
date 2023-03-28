cmake_minimum_required(VERSIO 3.16)

project(ex1-sort1)

include_directories(include)

# add library
add_library(sort src/mergesort.cpp src/insertinsort.cpp )

add_subdirectory(tests)

