#include<iostream>
using namespace std;
//parent calass
class Payment {
public:
    virtual void pay(double amount) = 0;
};

//child class
class UpiPayment : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " using UPI" << endl;
    }
};

//child class
class CardPayment : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " using Card" << endl;
    }
};

int main() {
    UpiPayment upiPayment;
    upiPayment.pay(100);

    CardPayment cardPayment;
    cardPayment.pay(200);
}
