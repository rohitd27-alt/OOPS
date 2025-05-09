/*54. Create a class Person with private attributes name, age, and public methods to set and get the values. */
#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    person p;

    p.setName("Sameer");
    p.setAge(19);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
}