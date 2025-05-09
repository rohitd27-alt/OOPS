// 27.Write a C++ program to calculate the sum of the first 50 natural numbers using a while loop.
#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int sum = 0;
    while (i <= 50)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
}