#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    double balance;
    string accountHolderName;
    int accountID;

public:
    BankAccount(int id, string name, double bal)
    {
        accountID = id;
        accountHolderName = name;
        if (bal >= 2000)
            balance = bal;
        else
            balance = 2000;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Rs. " << amount << " deposited successfully.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "\nAccount ID      : " << accountID << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount acc1(101, "Rudra", 2000);
    BankAccount acc2(102, "Rahul", 2000);

    acc1.deposit(5000);
    acc2.withdraw(3000);

    cout << "\nAccount Details:\n";
    acc1.display();
    acc2.display();

    return 0;
}