#include <iostream>
using namespace std;

class Payment {
protected:
    double amount;

public:
    Payment(double amt) {
        amount = amt;
    }

    void showAmount() {
        cout << "Amount: " << amount << endl;
    }
};

class UPIPayment : public Payment {
private:
    string upiId;

public:
    UPIPayment(double amt, string id)
        : Payment(amt) {
        upiId = id;
    }

    void pay() {
        showAmount();
        cout << "Paid using UPI ID: " << upiId << endl;
    }
};

class CardPayment : public Payment {
private:
    string cardNumber;

public:
    CardPayment(double amt, string card)
        : Payment(amt) {
        cardNumber = card;
    }

    void pay() {
        showAmount();
        cout << "Paid using Card ending with: " << cardNumber << endl;
    }
};

class WalletPayment : public Payment {
private:
    string walletName;

public:
    WalletPayment(double amt, string wallet)
        : Payment(amt) {
        walletName = wallet;
    }

    void pay() {
        showAmount();
        cout << "Paid using Wallet: " << walletName << endl;
    }
};

int main() {
    UPIPayment upi(500, "rahul@upi");
    CardPayment card(1200, "1234");
    WalletPayment wallet(300, "Paytm");

    upi.pay();
    card.pay();
    wallet.pay();
}
