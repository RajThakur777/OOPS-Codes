#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1 + c2; //Complex c3 = c1.operator+(c2);

    c3.display();
}
