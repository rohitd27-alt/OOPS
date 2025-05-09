#include <iostream>
#include <string> 
using namespace std;

class Parent
{
public:
    string name;

    Parent(string n) : name(n) {}

    void showParent()
    {
        cout << "Parent Name: " << name << endl;
    }
};

class Child1 : public Parent
{
public:
    Child1(string n) : Parent(n) {}

    void showChild1()
    {
        cout << "Child1 inherits from Parent: " << name << endl;
    }
};

class Child2 : public Parent
{
public:
    Child2(string n) : Parent(n) {}

    void showChild2()
    {
        cout << "Child2 inherits from Parent: " << name << endl;
    }
};

int main()
{
    Child1 c1("Raju");
    Child2 c2("Jaggu");

    c1.showParent();
    c1.showChild1();

    c2.showParent();
    c2.showChild2();

}
