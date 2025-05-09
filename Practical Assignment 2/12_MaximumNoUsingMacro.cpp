// 40. Implement a macro to find the maximum of two numbers and compare it with an inline function.

#include <iostream>
using namespace std;

#define maxNumber(a, b) ((a) > (b) ? (a) : (b));

int main()
{
    int a, b;
    cout << "Enter number of a and b: ";
    cin >> a >> b;

    cout << "The maximum number is " << maxNumber(a, b);
}