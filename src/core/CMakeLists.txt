cmake_minimum_required(VERSION 2.8)

project(libunited)

set(SOURCES
    core.c
    theme.c
)

include_directories(../include)

find_library(dl dl)
add_library(united SHARED ${SOURCES})
target_link_libraries(united dl)
