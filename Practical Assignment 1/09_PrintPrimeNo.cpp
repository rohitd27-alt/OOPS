// 39.Write a C++ program to print all the prime numbers between 1 and 100 using a for loop.
#include <iostream>
using namespace std;

int main()
{
    cout << "Print prime number from 1 to 100"<<endl;
    int isprime = 1;
    for (int j = 2; j <= 100; ++j)
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
            cout << "" << j <<" ";
            
        }
    }

    return 0;
}