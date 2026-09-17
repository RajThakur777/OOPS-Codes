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

class Student : public User {
public:
    Student(string name) : User(name) {
        cout << "Student constructor" << endl;
    }

    void attendClass() {
        cout << "Attending class" << endl;
    }
};

class Mentor : public User {
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
    TeachingAssistant(string name) : Student(name), Mentor(name) {
        cout << "TeachingAssistant constructor" << endl;
    }

    void helpStudents() {
        cout << "Helping students" << endl;
    }
};

int main() {
    TeachingAssistant ta("Rahul");

    // ta.name = "Rahul";   
    // ta.login();

    ta.Student::name = "Rahul Student Side";
    ta.Mentor::name = "soumya Mentor Side";
    
    // ta.Mentor::name = "Rahul Mentor Side";

    // ta.Student::login();
    // ta.Mentor::login();

    return 0;
}