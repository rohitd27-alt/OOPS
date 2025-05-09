// 38. Implement a program that uses an inline function to calculate the sum of two numbers.
#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    cout << "Enter two integer: ";
    cin >> num1 >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2);
}