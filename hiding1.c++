#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        }
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(10000);

    account.displayBalance();

    account.deposit(5000);
    account.displayBalance();

    account.withdraw(3000);
    account.displayBalance();
     
  




    return 0;
}