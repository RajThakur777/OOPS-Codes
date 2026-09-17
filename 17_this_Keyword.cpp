// #include <iostream>
// using namespace std;

// class Student {
// private:
//     string name;
//     int age;

// public:
//     Student(string name, int age) {
//         this->name = name;
//         this->age = age;
//     }

//     //non-static member function
//     void display() {
//         cout << name << " " << age << endl;
//     }
// };

// int main() {
//     Student s1("Rahul", 20);
//     s1.display();
// }

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter() {
        value = 0;
    }

    Counter& increment() {
        value++;
        return *this;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Counter c;
    c.increment().increment().increment(); //function chaining
    c.display();
}


