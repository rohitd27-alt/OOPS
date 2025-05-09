// 37.Write a C++ program to calculate the average of numbers in an array using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
    }
    float avg = sum / n;
    cout << "The average of element of the array is " <<(float) avg;
}