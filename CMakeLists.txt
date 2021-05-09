cmake_minimum_required(VERSION 3.5)

project(CppWhite LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR OFF)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
        week1/students.cpp
        )

add_executable(CppWhite ${PROJECT_SOURCES})
target_link_libraries(CppWhite)
