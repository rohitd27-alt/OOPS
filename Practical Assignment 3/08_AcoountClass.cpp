#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double initialBalance) : balance(initialBalance) {}

    double getBalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main()
{

    Account acc(1000);
    cout << "Initial balance: " << acc.getBalance() << endl;
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Final balance: " << acc.getBalance() << endl;
}
