#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    cout << "Print the multiplication table of " << n << endl;
    do
    {
        cout << n << "x" << i << "=" << n * i<<endl;
        i++;
    } while (i <= 10);
}