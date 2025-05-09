#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    void displayDetails()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1("The Great Gatsby", "F. Scott Fitzgerald", 1300);
    b1.displayDetails();
}
