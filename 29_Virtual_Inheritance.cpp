#include <iostream>
using namespace std;

class User {
public:
    string name;
    void login() {
        cout << name << " logged in" << endl;
    }
};

class Student : virtual public User {
public:
    void attendClass() {
        cout << "Attending class" << endl;
    }
};

class Mentor : virtual public User {
public:
    void takeSession() {
        cout << "Taking session" << endl;
    }
};

class TeachingAssistant : public Student, public Mentor {
public:
    void helpStudents() {
        cout << "Helping students" << endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.name = "Rahul";
    ta.login();

    ta.attendClass();
    ta.takeSession();
    ta.helpStudents();
}
