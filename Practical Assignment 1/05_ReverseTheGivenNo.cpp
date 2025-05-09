// 30.Write a C++ program to reverse a given number using a while loop.
#include <iostream>
using namespace std;
int main()
{
    long n, reverse = 0, remainder = 0;
    cout << "Enter some number : ";
    cin >> n;
    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;
        reverse = reverse * 10 + remainder;
    }
    cout << "Reversed number is: " << reverse;
}