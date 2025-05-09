// 56.Write a C++ program to calculate the sum of the harmonic series up to n terms using a for loop.
#include <iostream>
using namespace std;
int main()
{
    /*harmonic seiries
    1+ 1/2 + 1/3+ 1/4+...
    */
    int n, i;
    float sum = 0.0;
    cout << "Enter number of  term: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "1/" << i << " +" << " ";
        sum = sum + 1.0 / i;
        if (i == n)
        {
            cout << "...." << endl;
        }
    }
    cout << "Sum of harmonic series is " << sum;
}