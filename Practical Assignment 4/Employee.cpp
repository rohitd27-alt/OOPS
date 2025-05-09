#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void displaySalary()
    {
        cout << "Employee Salary." << endl;
    }
};

class Manager : public Employee
{
public:
    void displaySalary() override
    {
        cout << "Manager Salary: $5000" << endl;
    }
};

class Worker : public Employee
{
public:
    void displaySalary() override
    {
        cout << "Worker Salary: $3000" << endl;
    }
};

int main()
{

    Employee *emp1 = new Manager();
    Employee *emp2 = new Worker();

    emp1->displaySalary();
    emp2->displaySalary();

    delete emp1;
    delete emp2;
}
