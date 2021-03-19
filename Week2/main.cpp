#include "ClientModule.h"
#include "Employee.h"

using namespace std;

int main()
{
    ClientModule client;
    Employee bob(1,"Bob","Finance",true);
    client.hireNewEmployee(bob);
    client.printEmployeeReport(bob, FormatType::CSV);
    client.terminateEmployee(bob);
    return 0;
}