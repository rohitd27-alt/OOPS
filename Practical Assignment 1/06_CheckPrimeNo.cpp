// 31.Write a C++ program to check  the prime numbers  using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    int isprime = 1;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        cout << num << " is a prime number";
    }
    else
    {
        cout << num << " is not a prime number";
    }
}
