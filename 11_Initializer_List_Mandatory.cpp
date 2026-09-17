#include<iostream>
using namespace std;

//Case 1: const data member
class Student {
private:
    const int rollNo;

public:
    Student(int r) : rollNo(r) {
    }
};

// Wrong:
// class Student {
// private:
//     const int rollNo;

// public:
//     Student(int r) {
//         rollNo = r; // Error
//     }
// };
