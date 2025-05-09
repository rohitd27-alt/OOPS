// 57. Write a program that creates an array of Car objects and displays their details
#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string make;
    string model;
    int year;

    Car(string m, string mo, int y){
        make = m;
        model = mo;
        year = y;
    }
    void displayDetails(){
        cout << "Company name: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout<<"______________"<<endl;
    }
};

int main(){
    Car cars[3] = {
        Car("Honda", "City", 2025),
        Car("Hyundai", "Creta", 2025),
        Car("Toyota", "Fortuner", 2025)};

    for (int i = 0; i < 3; i++)
    {
        cout << "car " << i + 1 << " Details: " << endl;
        cars[i].displayDetails();
    }
}