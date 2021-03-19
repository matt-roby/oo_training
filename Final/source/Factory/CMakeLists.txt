target_include_directories(
    SignalGenCLI
    PRIVATE
        .
)

target_sources(
    SignalGenCLI
    PRIVATE
        CycleFactory.h
        OutputStepFactory.h
)
