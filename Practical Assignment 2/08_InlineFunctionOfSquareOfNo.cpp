// 36. Write an inline function that calculates the square of a number.
#include <iostream>
using namespace std;

inline long long int squareOfNumber(int a) // using long long to prevent overflow in int
{
    return a * a;
}
int main()
{
    int a;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "The square of " << a << " is " << squareOfNumber(a);
}