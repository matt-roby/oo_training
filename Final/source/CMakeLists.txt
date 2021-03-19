target_include_directories(
    SignalGenCLI
    PRIVATE
        .
)

target_sources(
    SignalGenCLI
    PRIVATE
        SignalGenCycleController.cpp
)

add_subdirectory(common)
add_subdirectory(CycleModel)
add_subdirectory(DAO)
add_subdirectory(Factory)
