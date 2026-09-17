#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    Student(string n) {
        name = n;
        cout << "Constructor called" << endl;
    }

    void display() {
        cout << name << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student* s = new Student("Rahul");
    s->display();
    delete s;

    
}
