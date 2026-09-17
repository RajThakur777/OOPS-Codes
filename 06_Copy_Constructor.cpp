#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    //Classname(const ClassName& variable)
    Student(const Student& other) {
        name = other.name;
        age = other.age;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1("Rahul", 20);
    Student s2 = s1;
    Student s3(s2);

    s2.display();
    s3.display();
}