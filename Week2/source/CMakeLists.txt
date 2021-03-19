target_include_directories(
    employees
    PRIVATE
        .
)

target_sources(
    employees
    PRIVATE
        ClientModule.cpp
        DatabaseConnectionManager.h
        Employee.h
        EmployeeDAO.h
        EmployeeReportFormatter.cpp
        IReportFormatter.h
)
