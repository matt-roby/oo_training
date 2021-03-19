cmake_minimum_required(VERSION 3.0.0)
project(test-17 VERSION 0.1.0)

add_executable(test-17 main.cpp)

set_property(TARGET test-17 PROPERTY CXX_STANDARD 17)
set_property(TARGET test-17 PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET test-17 PROPERTY CXX_EXTENSIONS OFF)
set_property(TARGET test-17 PROPERTY C_STANDARD 11)
set_property(TARGET test-17 PROPERTY C_STANDARD_REQUIRED ON)
set_property(TARGET test-17 PROPERTY C_EXTENSIONS OFF)

target_include_directories(
    test-17
    PRIVATE
        .
)

target_sources(
    test-17
    PRIVATE
        main.cpp
        test.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
