#include <iostream>
#include <string>
using namespace std;

int main()
{

    int integerValue;
    float floatValue;
    double doubleValue;
    char charValue;
    string stringValue;

    cout << "Enter an integer: ";
    cin >> integerValue;

    cout << "Enter a float: ";
    cin >> floatValue;

    cout << "Enter a double: ";
    cin >> doubleValue;

    cout << "Enter a character: ";
    cin >> charValue;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, stringValue);

    cout << "Integer: " << integerValue << endl;
    cout << "Float: " << floatValue << endl;
    cout << "Double: " << doubleValue << endl;
    cout << "Character: " << charValue << endl;
    cout << "String: " << stringValue << endl;
}
