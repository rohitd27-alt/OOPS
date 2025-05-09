// 43.Write a C++ program to print the first N even numbers using a for loop.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "First " << n << " even numbers are "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout << 2 * i << " ";
    }
}