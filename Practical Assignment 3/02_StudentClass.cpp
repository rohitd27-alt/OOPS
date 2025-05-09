/*55. Implement a class Student that inherits from Person and adds a private attribute
studentID with appropriate methods.  */
#include <iostream>
#include <string>
using namespace std;

class person{
private:
    string name;
    int age;
    double studentID;

public:
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
    void setAge(int a){
        age = a;
    }
    int getAge(){
        return age;
    }
};
class student : public person{
private:
    double studentID;

public:
    void setStudentID(double sID)
    {
        studentID = sID;
    }
    double getStudentID()
    {
        return studentID;
    }
};

int main(){

    student s;

    s.setName("Sameer");
    s.setAge(19);
    s.setStudentID(123456);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Student id: " << s.getStudentID() << endl;
}