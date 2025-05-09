#include <iostream>
#include <cmath> // For M_PI (π value)
using namespace std;

// Base class: Shape
class Shape
{
public:
    virtual double getArea() const = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const override
    {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const override
    {
        return width * height;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double getArea() const override
    {
        return 0.5 * base * height;
    }
};

int main()
{

    Shape *circle = new Circle(5.0);
    Shape *rectangle = new Rectangle(4.0, 6.0);
    Shape *triangle = new Triangle(4.0, 3.0);

    cout << "Area of Circle: " << circle->getArea() << endl;
    cout << "Area of Rectangle: " << rectangle->getArea() << endl;
    cout << "Area of Triangle: " << triangle->getArea() << endl;

    return 0;
}
