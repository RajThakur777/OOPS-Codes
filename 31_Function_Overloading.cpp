#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        cout << "Adding two integers" << endl;
        return a + b;
    }

    double add(double a, double b) {
        cout << "Adding two doubles" << endl;
        return a + b;
    }

    int add(int a, int b, int c) {
        cout << "Adding three integers" << endl;
        return a + b + c;
    }

     int add(int a, double b, int c) {
        cout << "Adding three integers" << endl;
        return a + b + c;
    }

    int getValue() {
        return 10;
    }
    
    // double getValue() {
    //     return 10.5;
    // }

};

int main() {
    Calculator calc;

    cout << calc.add(2, 3) << endl;
    cout << calc.add(2.5, 3.5) << endl;
    cout << calc.add(1, 2, 3) << endl;
    cout << calc.add(1.5, 2, 3) << endl;
}
