#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}

    Box &setDimensions(double l, double b, double h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
        return *this;
    }

    void displayVolume() const
    {
        double volume = length * breadth * height;
        cout << "Volume of the box: " << volume << endl;
    }

    void displayDimensions() const
    {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
};

int main()
{

    Box box1(10.0, 5.0, 3.0);

    box1.displayDimensions();
    box1.displayVolume();

    box1.setDimensions(15.0, 7.0, 4.0).displayDimensions();

    box1.displayVolume();
}
