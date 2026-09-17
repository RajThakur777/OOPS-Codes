#include <iostream>
using namespace std;

//parent class + abstract class
class Payment {
protected:
    double amount;

public:
    Payment(double amt) {
        amount = amt;
    }

    virtual void pay() = 0;
};

//child classes
class UPIPayment : public Payment {
private:
    string upiId;

public:
    UPIPayment(double amt, string id)
        : Payment(amt) {
        upiId = id;
    }

    void pay() override {
        cout << "Paid " << amount << " using UPI: " << upiId << endl;
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

    void pay() override {
        cout << "Paid " << amount << " using Card: " << cardNumber << endl;
    }
};

int main() {
    // Payment p(1000); // Error: cannot create object of abstract class

    UPIPayment upi(500, "rahul@upi");
    CardPayment card(1200, "1234");

    upi.pay();
    card.pay();
}
