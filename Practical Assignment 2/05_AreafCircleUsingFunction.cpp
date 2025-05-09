// 30. Write a simple function that calculates the area of a circle.
#include <iostream>
using namespace std;

double areaOfCircle(int r)
{
    const double pi = 3.14;
    return pi * r * r ;
}
int main()
{
    int r;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle of radius " << r << " is " << areaOfCircle(r);
}