cmake_minimum_required(VERSION 3.26)
project(CP_Solutions)

set(CMAKE_CXX_STANDARD 17)

# Automatically find ALL .cpp files and create a target for each
file(GLOB SOURCES "*.cpp")

foreach(file ${SOURCES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach()
