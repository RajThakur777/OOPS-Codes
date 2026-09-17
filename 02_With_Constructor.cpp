#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {
        cout << "Constructor called!" << endl;
        name = "Unknown";
        age = 0;
    }
};

int main() {
    Student s1;
    cout << s1.name << " " << s1.age << endl;
}