cmake_minimum_required(VERSION 2.8)

project(CMakeFormatter)

if (UNIX)
    message("UNIX type os")

    set(CMAKE_C_COMPILER /usr/bin/gcc-8)
    set(CMAKE_CXX_COMPILER /usr/bin/g++-8)
endif()

set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)

#Add build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

#Enable c++17
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -lstdc++fs -pthread")

include(${SOURCE_DIR}/CMakeLists.txt)


