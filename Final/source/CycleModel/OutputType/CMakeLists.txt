target_include_directories(
    SignalGenCLI
    PRIVATE
        .
)

target_sources(
    SignalGenCLI
    PRIVATE
        IOutputType.h
        SineOutput.h
        SquareOutput.h
)
