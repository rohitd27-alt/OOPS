//32.Write a C++ program to print the Fibonacci series up to a given number of terms using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci series is: ";
    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}