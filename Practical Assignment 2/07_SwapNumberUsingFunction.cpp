// 33. Write a function to swap two integers using call by reference.
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int x = 3, y = 4;
    cout << "Before swapping x = " << x << " and y = " << y << endl;
    swap(x, y);
    cout << "After swapping x = " << x << " and y = " << y << endl;
}