// 41. Write overloaded functions to calculate the area of a circle, rectangle, and triangle.
#include <iostream>
using namespace std;

// Function to calculate area of a Circle
double area(double radius)
{
    return 3.14 * radius * radius;
}

// Function to calculate area of a Rectangle
double area(double length, double width)
{
    return length * width;
}
// Function to calculate area of a Triangle
double area(double base, double height)
{
    return 0.5 * base * height;
}

int main()
{

    cout << "Area of Circle: " << area(5) << endl;

    cout << "Area of Rectangle: " << area(3, 4) << endl;

    cout << "Area of Triangle: " << area(8, 6) << endl;

}
