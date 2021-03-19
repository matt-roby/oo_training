target_include_directories(
    SignalGenCLI
    PRIVATE
        .
)

target_sources(
    SignalGenCLI
    PRIVATE
        IOutputBreakCondiditon.h
        MaxTempBreakCondition.h
        TempBreakCondition.h
        TimeBreakCondition.h
)
