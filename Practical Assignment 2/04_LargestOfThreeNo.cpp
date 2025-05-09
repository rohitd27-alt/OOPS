// 29. Implement a C++ program with a function prototype for a function that returns the maximum of three numbers.
#include <iostream>
using namespace std;

int maxNumber(int num1, int num2, int num3);

int maxNumber(int num1, int num2, int num3)
{
    int max = num1;
    if (num2 > max)
    {
        max = num2;
    }

    if (num3 > max)
    {
        max = num3;
    }

    return max;
}
int main()
{
    int a, b, c;
    cout << "Enter value of a, b and c: ";
    cin >> a >> b >> c;
    cout << "The Largest number is " << maxNumber(a, b, c);
}