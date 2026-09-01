#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance)
    {
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Deposited Amount: " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawn Amount: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount bank(5000);  // Constructor called

    bank.deposit(1000);
    bank.withdraw(2000);

    bank.display();

    return 0;
}