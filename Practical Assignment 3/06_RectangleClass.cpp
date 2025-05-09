/*59. Create a class Rectangle with private attributes for length and width, and public methods
to calculate area and perimeter. */
#include <iostream>
using namespace std;

class Rectangle{

private:
    int length;
    int width;

public:
    Rectangle(int l, int w){
        length = l;
        width = w;
    }

    int getArea(){
        return   length * width;
    }

     int getPerimeter(){
        return 2 * (length + width);
    }
    void displayDetails(){
        cout << "Length of Rectangle is: " << length << endl;
        cout << "Width of Rectangle is: " << width << endl;
    }
};

int main(){

    Rectangle r(2, 4);
    r.displayDetails();

    cout << "Area of rectangle is " << r.getArea()<<endl;
    cout << "Perimeter of rectangle is " << r.getPerimeter()<<endl;
}