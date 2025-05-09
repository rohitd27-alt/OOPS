#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Circle : public Shape
{
    float r;

public:
    Circle(float radius) : r(radius) {}
    float area() { return 3.14 * r * r; }
};

class Rectangle : public Shape
{
    float l, w;

public:
    Rectangle(float length, float width) : l(length), w(width) {}
    float area() { return l * w; }
};

class Triangle : public Shape
{
    float b, h;

public:
    Triangle(float base, float height) : b(base), h(height) {}
    float area() { return 0.5 * b * h; }
};

int main()
{
    Shape *s;

    s = new Circle(5);
    cout << "Circle area: " << s->area() << endl;

    s = new Rectangle(4, 6);
    cout << "Rectangle area: " << s->area() << endl;

    s = new Triangle(3, 7);
    cout << "Triangle area: " << s->area() << endl;

    delete s;
    
}
