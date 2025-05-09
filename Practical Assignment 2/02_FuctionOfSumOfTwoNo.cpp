//  27. Create a program that takes two integers as command line arguments and prints their sum
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return  + b;;
}

int main()
{
    int num1, num2;
    cout << "Enter two integer: ";
    cin >> num1 >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2);
}