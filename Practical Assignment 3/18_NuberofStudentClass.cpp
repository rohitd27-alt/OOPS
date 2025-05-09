#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    static int totalStudents;

public:
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        totalStudents++;
    }

    void display()
    {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }

    static void showTotalStudents()
    {
        cout << "Total students enrolled: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main()
{
    Student s1("Raju", 101);
    Student s2("Kaliya", 102);
    Student s3("Jaggu", 103);

    s1.display();
    s2.display();
    s3.display();

    Student::showTotalStudents();
}
