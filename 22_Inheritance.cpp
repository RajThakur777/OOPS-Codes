#include<iostream>
using namespace std;

//Base/parent class
class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hi, I am " << name << endl;
    }
};

//child Class
class Student : public Person {
public:
    int rollNo;

    void study() {
        cout << name << " is studying" << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Rahul";
    s1.age = 20;
    s1.rollNo = 1;

    s1.introduce();
    s1.study();
}