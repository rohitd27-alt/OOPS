/*60. Write a class Employee with private attributes name, position, and salary, and public 
methods to display employee details. */
#include<iostream>
#include<string>

using namespace std;
 
class employee{
 private:
    string name;
    string position;
    double salary;
public:
  employee(string n,string p,double s){
    name = n ;
    position = p;
    salary = s;
  }
  void displayDetails(){
    cout<<"Employee name : "<<name<<endl;
    cout<<"Employee position: "<<position<<endl;
    cout<<"Employee salary: "<<salary<<endl;
    cout << "-----------------------------" << endl;
  }
};

int main(){
   
    employee emp1("Raju","junior developer",25000);
    emp1.displayDetails();

    employee emp2("Shyam","senior developer",35000);
    emp2.displayDetails();
}