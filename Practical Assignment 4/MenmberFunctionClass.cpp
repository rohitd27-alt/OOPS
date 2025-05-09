#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    Box(int l) : length(l) {}

    Box *getThis()
    {
        return this;
    }

    void show()
    {
        cout << "Length = " << length << endl;
    }
};

int main()
{
    Box b1(10);

    Box *ptr = b1.getThis();
    ptr->show();
    
}
