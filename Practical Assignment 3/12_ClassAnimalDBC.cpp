#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() const
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() const override
    {
        cout << "Dog says Bhauu!" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() const override
    {
        cout << "Cat says Mai aau!" << endl;
    }
};

class Bird : public Animal
{
public:
    void speak() 
    {
        cout << "Bird says Tweet!" << endl;
    }
};

int main()
{

    Dog d;
    Cat c;
    Bird b;

    cout << "Dog: ";
    d.speak();

    cout << "Cat: ";
    c.speak();

    cout << "Bird: ";
    b.speak();
}
