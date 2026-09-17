#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age=20;
};

int main() {
    Student s1;
    cout << s1.name << "hello " << s1.age << endl;
}

// //declaration ->no values gets assigned 
// //inititalization -> values assign


