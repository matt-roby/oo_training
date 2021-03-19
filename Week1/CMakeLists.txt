cmake_minimum_required(VERSION 3.13)

project(Zoo)

add_executable(zoo Zoo.cpp)

set_property(TARGET zoo PROPERTY CXX_STANDARD 17)
set_property(TARGET zoo PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET zoo PROPERTY CXX_EXTENSIONS OFF)
set_property(TARGET zoo PROPERTY C_STANDARD 11)
set_property(TARGET zoo PROPERTY C_STANDARD_REQUIRED ON)
set_property(TARGET zoo PROPERTY C_EXTENSIONS OFF)

add_subdirectory(source)