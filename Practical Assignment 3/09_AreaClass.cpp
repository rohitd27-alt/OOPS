#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    Circle(float r = 0)
    {
        radius = r;
    }

    friend float calculateArea(const Circle &c);
};

float calculateArea(const Circle &c)
{
    return 3.14 * c.radius * c.radius;
}

int main()
{
    Circle circle1(5.0);
    Circle circle2(7.0);

    cout << "Area of circle 1: " << calculateArea(circle1) << endl;
    cout << "Area of circle 2: " << calculateArea(circle2) << endl;

    return 0;
}
