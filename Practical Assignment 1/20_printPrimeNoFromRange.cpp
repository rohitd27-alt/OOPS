// 39.Write a C++ program to print all the prime numbers between 1 and 100 using a for loop.
#include <iostream>
using namespace std;

int main()
{
    int initialNum, lastNum;
    cout << "Enter initial number : ";
    cin >> initialNum;
    cout << "Enter last number : ";
    cin >> lastNum;

    cout << "prime number from " << initialNum << " to " << lastNum << endl;
    int isprime = 1;
    for (int j = initialNum; j <= lastNum; ++j)
    {
        isprime = 1;
        for (int i = 2; i < j; ++i)
        {
            if (j % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            cout << "" << j << " ";
        }
    }

    return 0;
}