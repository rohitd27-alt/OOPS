// 29.Write a C++ program to find the factorial of a given number using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int fact = 1;
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i; // fact = fact * i;
    }
    cout << "The factorial of " << n << " is "  << fact;
}