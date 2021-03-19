#include "ClientModule.h"
#include <iostream>


ClientModule::ClientModule() 
{
    m_employeeDAO = make_unique<EmployeeDAO>();
}

void ClientModule::hireNewEmployee(Employee emp) 
{
    m_employeeDAO->saveEmployee(emp);
}

void ClientModule::terminateEmployee(Employee emp) 
{
    m_employeeDAO->saveEmployee(emp);
}

void ClientModule::printEmployeeReport(Employee emp, FormatType formatType) 
{
    EmployeeReportFormatter formatter(emp, formatType);
    cout << formatter.getFormattedValue() << endl;
}
