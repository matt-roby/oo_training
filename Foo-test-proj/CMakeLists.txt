cmake_minimum_required(VERSION 3.13)

project(Foo)

add_executable(foo "")

set_property(TARGET foo PROPERTY CXX_STANDARD 17)
set_property(TARGET foo PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET foo PROPERTY CXX_EXTENSIONS OFF)
set_property(TARGET foo PROPERTY C_STANDARD 11)
set_property(TARGET foo PROPERTY C_STANDARD_REQUIRED ON)
set_property(TARGET foo PROPERTY C_EXTENSIONS OFF)

add_subdirectory(source)
