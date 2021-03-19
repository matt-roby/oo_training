#ifndef __EMPLOYEEDAO_H__
#define __EMPLOYEEDAO_H__

#include "DatabaseConnectionManager.h"
#include "Employee.h"
#include <memory>
#include <iostream>
using namespace std;

class EmployeeDAO
{
    public:
        EmployeeDAO()
        {
           DatabaseConnectionManager::getManagerInstance().connect();
        }
        ~EmployeeDAO()
        {
            DatabaseConnectionManager::getManagerInstance().disconnect();
        }
        void saveEmployee(Employee emp) { cout << "Employee " << emp.getName() << " saved to Database." << endl; }
        void deleteEmployee(Employee emp) { cout << "Employee " << emp.getName() << " deleted from Database." << endl; }
};

#endif // __EMPLOYEEDAO_H__