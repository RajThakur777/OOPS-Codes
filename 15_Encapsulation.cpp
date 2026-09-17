#include<iostream>
using namespace std;

//Bad example:
// class BankAccount {
// public:
//     double balance;
// };

//Good example:
class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount; //1500
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;//1300
            return true;
        }
        return false;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000);
    account.deposit(500);
    account.withdraw(200);
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}
