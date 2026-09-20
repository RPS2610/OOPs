#include <iostream>
using namespace std;

class BankAccount;

class LoanManager {
public:
    void showBalance(const BankAccount& b);
};

class BankAccount {
private:
    int accountNo;
    double balance;

public:
    BankAccount(int a, double b) {
        accountNo = a;
        balance = b;
    }

    friend class LoanManager;

    class Transaction {
    private:
        double amount;

    public:
        Transaction(double a) {
            amount = a;
        }

        void showTransaction() {
            cout << "Transaction Amount: "
                 << amount << endl;
        }
    };

    void display() {
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

void LoanManager::showBalance(const BankAccount& b) {
    cout << "Loan Manager Access" << endl;
    cout << "Account No: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
}

int main() {
    BankAccount account(101, 50000);

    LoanManager manager;

    account.display();

    manager.showBalance(account);

    BankAccount::Transaction t(5000);
    t.showTransaction();

    return 0;
}