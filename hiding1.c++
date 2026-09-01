#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    // Constructor
    BankAccount(double initialBalance)
    {
        balance = initialBalance;
    }

    // Deposit
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited Amount: " << amount << endl;
    }

    // Withdraw
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn Amount: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display Balance
    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount bank(5000);
    bank.display();
    bank.deposit(1000);
    bank.display();
    bank.withdraw(2000);
    bank.display();

    return 0;
}