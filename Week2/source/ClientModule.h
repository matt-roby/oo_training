#ifndef __CLIENTMODULE_H__
#define __CLIENTMODULE_H__

#include "EmployeeReportFormatter.h"
#include "Employee.h"
#include "EmployeeDAO.h"
#include <memory>
using namespace std;

class ClientModule
{
    public:
        ClientModule();
        void hireNewEmployee(Employee emp);
        void terminateEmployee(Employee emp);
        void printEmployeeReport(Employee emp, FormatType formatType);
    private:
        unique_ptr<EmployeeDAO> m_employeeDAO;
};

#endif // __CLIENTMODULE_H__