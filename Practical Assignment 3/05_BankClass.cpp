// 58. Implement a class BankAccount with private attributes for account number, balance, and 
// public methods for depositing and withdrawing money.
#include<iostream>
#include<string>
using namespace std;

class BankAccount{

   private:
   double accNumber;
   double balance;

   public:
   BankAccount(double acn,double bal){
      accNumber = acn;
      balance = bal;
   }
   void displayDetails(){
       cout<<"Your bank account number : "<<accNumber<<endl;
       cout<<"Your bank balance : "<<balance<<endl;
   }

};

int main()
{

   BankAccount myAcc(123456,26000);
   myAcc.displayDetails();
   
}