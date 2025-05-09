/*56. Design a class Car with attributes for make, model, and year. Include methods to display
car details.*/
#include <iostream>
#include <string>
using namespace std;

class car{
public:
    string make;
    string model;
    int year;

    car(string m, string mo, int y){
        make = m;
        model = mo;
        year = y;
    }
   void displayDetails(){
    cout << "Company name: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
   }
};

int main(){

    car c1("Honda", "City", 2025);
    car c2("Toyota","Fortuner",2025);

    c1.displayDetails();
    c2.displayDetails();
    
}