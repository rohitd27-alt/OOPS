// 35.Write a C++ program to find the largest number in an array using a for loop.
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

    int minNum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (minNum > arr[i])
        {
            minNum = arr[i];
        }
    }
    cout << "The smallest  element in the array is " << minNum;
}