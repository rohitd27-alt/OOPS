#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person
{
public:
    string position;
    double salary;

    Employee(string n, int a, string p, double s) : Person(n, a), position(p), salary(s) {}

    void display()
    {

        Person::display();
        cout << "Position: " << position << ", Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp("Raj", 30, "Software Engineer", 70000);
    emp.display();
}
