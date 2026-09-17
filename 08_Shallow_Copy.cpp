#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
    char* name;

    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    void display() {
        cout << name << endl;
    }

    ~Student() {
        delete[] name;
    }
};

int main() {
    Student s1("Rahul");

    Student s2 = s1;   // default copy constructor

    s2.name[0] = 'A';
    //printing the address of s1 and s2
    cout << "Address of s1: " << (void*)s1.name << endl;
    cout << "Address of s2: " << (void*)s2.name << endl;
    s1.display();
    s2.display();
}