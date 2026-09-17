#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    static int totalStudents;

    Student(string n) {
        name = n;
        this->totalStudents++;
    }

    //non-static member function
    void display() {
        cout << name << endl;
    }

    //static member function
    static void showTotalStudents() {
        cout << "Total students: " << totalStudents << endl;
    }


};

int Student::totalStudents = 0;

int main() {
    Student s1("Rahul");
    Student s2("Aman");
    Student s3("Neha");

    //cout << "Total students: " << Student::totalStudents << endl;
    Student::showTotalStudents();

}
