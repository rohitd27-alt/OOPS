#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person &setName(string n)
    {
        name = n;
        return *this;
    }

    Person &setAge(int a)
    {
        age = a;
        return *this;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person p;
    p.setName("Sameer").setAge(19).display();

}
