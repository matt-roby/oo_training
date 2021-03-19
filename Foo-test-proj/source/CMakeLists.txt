target_include_directories(
    foo
    PRIVATE
        .
)

target_sources(
    foo
    PRIVATE
        main.cpp
        a.cpp
        c.c
)

add_subdirectory(b)
