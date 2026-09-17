#include <iostream>
using namespace std;

class Payment {
protected:
    double amount;

public:
    Payment(double amt) {
        amount = amt;
        cout<<"Payment constructor"<<endl;
    }

    virtual void pay() {
    
    }

    virtual ~Payment() {
        cout << "Payment destructor" << endl;
    }

};

class UPIPayment : public Payment {
private:
    string upiId;

public:
    UPIPayment(double amt, string id)
        : Payment(amt) {
        upiId = id;
        cout<<"UPI Payment constructor"<<endl;
    }

    void pay() override {
        cout << "Paid " << amount << " using UPI ID: " << upiId << endl;
    }

    ~UPIPayment() {
        cout << "UPI destructor" << endl;
    }

};

class CardPayment : public Payment {
private:
    string cardNumber;

public:
    CardPayment(double amt, string card)
        : Payment(amt) {
        cardNumber = card;
        cout<<"Card Payment constructor"<<endl;
    }

    void pay() override {
        cout << "Paid " << amount << " using Card ending with: " << cardNumber << endl;
    }

    ~CardPayment() {
        cout << "Card Payment destructor" << endl;
    }
};

class WalletPayment : public Payment {
private:
    string walletName;

public:
    WalletPayment(double amt, string wallet)
        : Payment(amt) {
        walletName = wallet;
        cout<<"Wallet Payment constructor"<<endl;
    }

    void pay() override {
        cout << "Paid " << amount << " using Wallet: " << walletName << endl;
    }

    ~WalletPayment() {
        cout << "Wallet Payment destructor" << endl;
    }
};

int main() {
    Payment* p1 = new UPIPayment(500, "rahul@upi");
    Payment* p2 = new CardPayment(1200, "1234");
    Payment* p3 = new WalletPayment(300, "Paytm");

    p1->pay();
    p2->pay();
    p3->pay();

    delete p1;
    delete p2;
    delete p3;
}
