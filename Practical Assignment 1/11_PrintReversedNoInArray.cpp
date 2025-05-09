// 36.Write a C++ program to print the elements of an array in reverse order using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Number: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<< "Reversed order of array ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout  << arr[i] << " ";
    }
}