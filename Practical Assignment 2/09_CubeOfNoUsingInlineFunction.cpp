// 37. Create an inline function that returns the cube of a number.
#include <iostream>
using namespace std;

inline long long int cubeOfNumber(int a)
{
    return a * a * a;
}
int main()
{
    int a;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "The cube of " << a << " is " << cubeOfNumber(a);
}