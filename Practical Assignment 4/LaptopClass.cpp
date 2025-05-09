#include <iostream>
using namespace std;

class Device
{
public:
    virtual void turnOn() = 0;
};

class Laptop : public Device
{
public:
    void turnOn() override
    {
        cout << "Laptop is turning on..." << endl;
    }
};

class Smartphone : public Device
{
public:
    void turnOn() override
    {
        cout << "Smartphone is turning on..." << endl;
    }
};

int main()
{

    Device *device;
    Laptop l;
    Smartphone s;

    l.turnOn();
    s.turnOn();

    
}
