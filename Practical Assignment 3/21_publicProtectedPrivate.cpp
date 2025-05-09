#include <iostream>
using namespace std;

class Library
{
private:
    string privateBook = "Private Book";

protected:
    string protectedBook = "Protected Book";

public:
    string publicBook = "Public Book";

    void displayBooks()
    {
        cout << privateBook << endl;
        cout << protectedBook << endl;
        cout << publicBook << endl;
    }
};

int main()
{
    Library lib;

    cout << "Public Book: " << lib.publicBook << endl;
    lib.displayBooks();
}
