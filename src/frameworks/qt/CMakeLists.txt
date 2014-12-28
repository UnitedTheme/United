cmake_minimum_required(VERSION 2.8.10.2)

project(united-qt)

find_package(Qt4 REQUIRED)

include_directories(../../include)

set(united-qt_SOURCES
    UnitedStyle.cpp
    UnitedStylePlugin.cpp
)

set(united-qt_HEADERS
    UnitedStyle.h
    UnitedStylePlugin.h
)

QT4_WRAP_CPP(united-qt_HEADERS_MOC ${united-qt_HEADERS})

include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})

add_library(united-qt SHARED ${united-qt_SOURCES} ${united-qt_HEADERS_MOC})
target_link_libraries(united-qt ${QT_LIBRARIES})

