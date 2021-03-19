#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <string>

using namespace std;

class Employee
{
    public:
        Employee(long id, string name, string department, bool working):
            m_id(id),
            m_name(name),
            m_department(department),
            m_working(working)
            {}
        long getID() { return m_id; }
        string getName() { return m_name; }
        string getDepartment() { return m_department; }
        bool getWorking() { return m_working; }
    private:
        long m_id;
        string m_name;
        string m_department;
        bool m_working;
};

#endif // __EMPLOYEE_H__