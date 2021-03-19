target_include_directories(
    SignalGenCLI
    PRIVATE
        .
)

target_sources(
    SignalGenCLI
    PRIVATE
        JSONCycleDAO.cpp
        ICycleDAO.h
)
