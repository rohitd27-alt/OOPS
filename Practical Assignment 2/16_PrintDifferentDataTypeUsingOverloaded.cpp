// Create overloaded functions to print different data types (int, float, string).
#include <iostream>
using namespace std;
void printValue(int num)
{
    cout << "Integer value is : " << num << endl;
}
void printValue(float num)
{
    cout << "float value is : " << num << endl;
}

void printValue(string name)
{
    cout << "My name is  " << name << endl;
}
int main()
{
   

    printValue(4);
    printValue(23.45f);
    printValue("Sameer Maloti");
    
}