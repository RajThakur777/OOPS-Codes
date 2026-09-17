#include <iostream>
using namespace std;

class User {
public:
    string name;

    User(string name) {
        this->name = name;
        cout << "User constructor: " << name << endl;
    }

    void login() {
        cout << name << " logged in" << endl;
    }
};

class Student : virtual public User {
public:
    Student(string name) : User(name) {
        cout << "Student constructor" << endl;
    }

    void attendClass() {
        cout << "Attending class" << endl;
    }
};

class Mentor : virtual public User {
public:
    Mentor(string name) : User(name) {
        cout << "Mentor constructor" << endl;
    }

    void takeSession() {
        cout << "Taking session" << endl;
    }
};

class TeachingAssistant : public Student, public Mentor {
public:
    TeachingAssistant(string name)
        : User(name), Student(name), Mentor(name) {
        cout << "TeachingAssistant constructor" << endl;
    }

    void helpStudents() {
        cout << "Helping students" << endl;
    }
};

int main() {
    TeachingAssistant ta("Rahul");

    ta.login();
    ta.attendClass();
    ta.takeSession();
    ta.helpStudents();

    return 0;
}