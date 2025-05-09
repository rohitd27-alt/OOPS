
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int count = 1, sum = 0;
    while (count <= n)
    {
        sum = sum + count;
        count = count + 1;
    }
    cout << sum;
}