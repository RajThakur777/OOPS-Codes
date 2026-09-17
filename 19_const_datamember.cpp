#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student(int r, string n) : rollNo(r), name(n) {
    }

    //const member function
    void display() const{
        //rollNo++ ;//wrong
        cout << rollNo << " " << name << endl;

    }
    
    void printStudent(const Student& s) const {
        s.display();
    }

    void showDetails(){
        //age++ //wrong
        cout << rollNo << " " << name << endl;
    }
};

int main() {
    Student s1(101, "Rahul");
    const Student s2(102, "Aman");  
    
    s1.display();
    //s2.display();

    s1.showDetails();
    //s2.showDetails();

    s1.printStudent(s1);
    s2.printStudent(s2);
    s1.printStudent(s2);
}
