cmake_minimum_required(VERSION 2.8.10.2)

project(simpletheme)

include_directories(../../include)

find_library(cairo cairo)
add_library(simpletheme SHARED theme.c)
target_link_libraries(simpletheme cairo)

