// 44.Write a C++ program to print a pattern using nested for loops.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "* " << " ";
        }
        cout << endl;
    }
    cout<<endl;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}