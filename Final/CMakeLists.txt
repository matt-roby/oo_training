cmake_minimum_required(VERSION 3.13)

add_executable(SignalGenCLI SignalGenCLI.cpp)

set_property(TARGET SignalGenCLI PROPERTY CXX_STANDARD 17)
set_property(TARGET SignalGenCLI PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET SignalGenCLI PROPERTY CXX_EXTENSIONS OFF)
set_property(TARGET SignalGenCLI PROPERTY C_STANDARD 11)
set_property(TARGET SignalGenCLI PROPERTY C_STANDARD_REQUIRED ON)
set_property(TARGET SignalGenCLI PROPERTY C_EXTENSIONS OFF)

add_subdirectory(library)