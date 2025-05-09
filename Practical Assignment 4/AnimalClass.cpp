#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal speaks." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog says: Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "Cat says: Meow!" << endl;
    }
};

class Bird : public Animal
{
public:
    void speak() override
    {
        cout << "Bird says: Tweet!" << endl;
    }
};

int main()
{
    Animal *a;

    Dog d;
    Cat c;
    Bird b;

    a = &d;
    a->speak();

    a = &c;
    a->speak();

    a = &b;
    a->speak();

}
