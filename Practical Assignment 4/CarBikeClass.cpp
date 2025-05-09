#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
};

class Car : public Vehicle
{
public:
    void start() override
    {
        cout << "Car starts with a key." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void start() override
    {
        cout << "Bike starts with a kick or button." << endl;
    }
};

int main()
{
    Vehicle *v;
    Car c;
    Bike b;

    c.start();
    b.start();
}
