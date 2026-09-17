#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Generic payment" << endl;
    }
};

class UPIPayment : public Payment {
public:
    void pay() {
        cout << "Paid using UPI" << endl;
    }
};

int main() {
    // UPIPayment upi;
    // upi.pay();

    Payment* p;
    UPIPayment upi;
    p = &upi;
    p->pay();

    return 0;

}
