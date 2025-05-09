// 39. Write a macro to calculate the square of a number and compare its performance with an  inline function.
#include <iostream>
#define square(a) ((a) * (a));
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    cout << "The Square of " << a << " is " << square(a);
}
