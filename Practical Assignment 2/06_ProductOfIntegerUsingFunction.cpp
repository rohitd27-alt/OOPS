// 30. Implement a function that takes two integers and returns their product. 
#include <iostream>
using namespace std;


int product(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Product of " << num1 << " and " << num2 << " is " << product(num1, num2);
}
