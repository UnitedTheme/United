cmake_minimum_required(VERSION 2.8)

project(united-gtk2)

set(SOURCES
    united_theme.c
    united_theme_main.c
)

# libunited headers
include_directories(../../include)
find_library(united united)

find_package(GTK2)

include_directories(${GTK2_INCLUDE_DIRS})
link_directories(${GTK2_LIBRARY_DIRS})
add_definitions(${GTK2_CFLAGS_OTHER})

add_library(united-gtk2 SHARED ${SOURCES})
target_link_libraries(united-gtk2 united)
