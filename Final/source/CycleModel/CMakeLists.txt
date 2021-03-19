target_include_directories(
    SignalGenCLI
    PRIVATE
        .
)

target_sources(
    SignalGenCLI
    PRIVATE
        Cycle.h
        OutputStep.h
        OutputStepData.h
)

add_subdirectory(OutputType)
add_subdirectory(OutputBreakCondition)
