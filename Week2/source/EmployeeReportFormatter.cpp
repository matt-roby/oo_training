#include "EmployeeReportFormatter.h"

EmployeeReportFormatter::EmployeeReportFormatter(Employee anEmployee, FormatType formatType):
    m_employee(anEmployee),
    m_formatType(formatType)
{

}

string EmployeeReportFormatter::getFormattedValue() 
{
    if(m_formatType == FormatType::XML)
    {
        return convertObjectToXML();
    }
    else //CSV
    {
        return convertObjectToCSV();
    }
}

string EmployeeReportFormatter::convertObjectToXML() 
{
    return "<XML Employee>";
}

string EmployeeReportFormatter::convertObjectToCSV() 
{
    return m_employee.getID() + "," + m_employee.getName() + "," + m_employee.getDepartment() + "," + (m_employee.getWorking() ? "True" : "False");
}
