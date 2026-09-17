#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {
        name = "Unknown";
        age = 0;
    }

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Rahul", 20);
    Student s3("Aman", 22);
    s1.display();
    s2.display();
    s3.display();
}