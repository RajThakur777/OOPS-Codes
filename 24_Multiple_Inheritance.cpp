#include <iostream>
using namespace std;

class Printer {
public:
    void printDocument(string document) {
        cout << "Printing document: " << document << endl;
    }
};

class Scanner {
public:
    void scanDocument(string document) {
        cout << "Scanning document: " << document << endl;
    }
};

class SmartPrinter : public Printer, public Scanner {
public:
    void copyDocument(string document) {
        scanDocument(document);
        printDocument(document);
        cout << "Copy completed" << endl;
    }
};

int main() {
    SmartPrinter machine;

    machine.printDocument("Resume.pdf");
    machine.scanDocument("Certificate.pdf");
    machine.copyDocument("ID_Card.pdf");
}
