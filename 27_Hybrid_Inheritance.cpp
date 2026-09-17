#include <iostream>
using namespace std;

class User {
protected:
    string name;

public:
    User(string n) {
        name = n;
    }

    void showName() {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public User {
protected:
    string courseName;

public:
    Student(string n, string course)
        : User(n) {
        courseName = course;
    }

    void showCourse() {
        cout << "Course: " << courseName << endl;
    }
};

class Mentor : virtual public User {
protected:
    string expertise;

public:
    Mentor(string n, string exp)
        : User(n) {
        expertise = exp;
    }

    void showExpertise() {
        cout << "Expertise: " << expertise << endl;
    }
};

class TeachingAssistant : public Student, public Mentor {
public:
    TeachingAssistant(string n, string course, string exp) 
    : User(n), Student(n, course), Mentor(n, exp) {
    }

    void showDetails() {
        showName();
        showCourse();
        showExpertise();
    }
};

int main() {
    TeachingAssistant ta("Aman", "DSA", "Dynamic Programming");
    ta.showDetails();
}
