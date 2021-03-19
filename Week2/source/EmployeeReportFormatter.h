#ifndef __EMPLOYEEREPORTFORMATTER_H__
#define __EMPLOYEEREPORTFORMATTER_H__

#include <string>
#include <IReportFormatter.h>
#include <Employee.h>

using namespace std;

class EmployeeReportFormatter : public IReportFormatter
{
    public:
        EmployeeReportFormatter(Employee anEmployee, FormatType formatType);        
        string getFormattedValue();
    private:
        string convertObjectToXML();
        string convertObjectToCSV();
        Employee m_employee;
        FormatType m_formatType;
};

#endif // __EMPLOYEEREPORTFORMATTER_H__