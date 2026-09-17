#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {
        cout << "Constructor called" << endl;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s("Rahul", 20);
    s.display();
}
