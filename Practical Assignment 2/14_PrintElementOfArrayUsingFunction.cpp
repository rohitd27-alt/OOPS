// 32. Create a function that prints the elements of an array.
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Elements of array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the  elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, n);
}