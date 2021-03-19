target_include_directories(
    foo
    PRIVATE
        .
)

target_sources(
    foo
    PRIVATE
        b.cpp
)
