#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    double grade;

public:
    Student(string n, int a, double g) : name(n), age(a), grade(g) {}

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{

    Student *studentPtr = new Student("Raju", 20, 88.5);

    cout << "Student Details: " << endl;
    studentPtr->display();

    delete studentPtr;
}
