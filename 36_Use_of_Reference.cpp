#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() = 0;

    virtual ~Payment() {
    }
};

class UPIPayment : public Payment {
public:
    void pay() override {
        cout << "Paid using UPI" << endl;
    }
};

class CardPayment : public Payment {
public:
    void pay() override {
        cout << "Paid using Card" << endl;
    }
};

void processPayment(Payment& payment) {
    payment.pay();
}

int main() {
    UPIPayment upi;
    CardPayment card;

    processPayment(upi);
    processPayment(card);
}
