#include <iostream>
using namespace std;


template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
   

    int x = 5, y = 10;
    cout << "Max of " << x << " and " << y << " is: " << findMax(x, y) << endl;

    double m = 5.5, n = 3.3;
    cout << "Max of " << m << " and " << n << " is: " << findMax(m, n) << endl;

    char c1 = 'A', c2 = 'Z';
    cout << "Max of " << c1 << " and " << c2 << " is: " << findMax(c1, c2) << endl;

    
}
