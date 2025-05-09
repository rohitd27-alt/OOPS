#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    cout << "Before updation: ";
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After updation: ";
    arr[1] = 24; // 
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
}