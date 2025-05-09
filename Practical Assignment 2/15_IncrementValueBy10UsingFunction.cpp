// 34. Implement a function that increments the value of an integer by 10 using call by reference.
#include <iostream>
using namespace std;

void increment(int &num)
{
    num += 10;
}

int main()
{
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    increment(a);
    cout << "After increment " << a << endl;
}