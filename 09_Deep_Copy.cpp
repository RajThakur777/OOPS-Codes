#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
    char* name;

public:
    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Student(const Student& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);

        cout << "Deep copy constructor called" << endl;
    }

    void changeFirstChar(char ch) {
        name[0] = ch;
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

    Student s2 = s1;

    s2.changeFirstChar('A');

    //printng the memory address
  cout << "Address of s1: " << (void*)s1.name << endl;
    cout << "Address of s2: " << (void*)s2.name << endl;

    s1.display();
    s2.display();
}