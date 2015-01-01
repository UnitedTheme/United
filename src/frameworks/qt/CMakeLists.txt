cmake_minimum_required(VERSION 2.8)

project(united-qt)

set(united-qt_SOURCES
    UnitedStyle.cpp
    UnitedStylePlugin.cpp
)

set(united-qt_HEADERS
    UnitedStyle.h
    UnitedStylePlugin.h
)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# libunited headers
include_directories(../../include)
find_library(united united)

# we're building qt style plugin
add_definitions(-DQT_PLUGIN)

# build qt4 style plugin
find_package(Qt4)

add_library(united-qt4 SHARED ${united-qt_SOURCES})
target_link_libraries(united-qt4 Qt4::QtGui united)

# build qt5 style plugin
find_package(Qt5Core)
find_package(Qt5Widgets)

add_library(united-qt5 SHARED ${united-qt_SOURCES})
target_link_libraries(united-qt5 Qt5::Widgets united)
