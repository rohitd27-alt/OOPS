#include <iostream>
using namespace std;

class Math
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }

    static int subtract(int a, int b)
    {
        return a - b;
    }

    static int multiply(int a, int b)
    {
        return a * b;
    }

    static float divide(int a, int b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return static_cast<float>(a) / b;
    }
};

int main()
{
    int x = 20, y = 10;

    cout << "Addition: " << Math::add(x, y) << endl;
    cout << "Subtraction: " << Math::subtract(x, y) << endl;
    cout << "Multiplication: " << Math::multiply(x, y) << endl;
    cout << "Division: " << Math::divide(x, y) << endl;
}
