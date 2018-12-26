cmake_minimum_required(VERSION 2.8)

project(CMakeFormatter)

if (UNIX)
    message("UNIX type os")
    set(CMAKE_C_COMPILER /usr/bin/gcc-8)
    set(CMAKE_CXX_COMPILER /usr/bin/g++-8)
endif()

#Enable c++17
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -lstdc++fs -pthread")

add_executable(${PROJECT_NAME} "main.cpp")
