#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    int *ptr;
};

class A{
 public:
 int * ptr;
 A(int val){
    ptr = new int(val);
 }
};



int main() {
    // Student s1;
    // s1.name = "Rahul";
    // s1.age = 20;


    // Student s2 = s1;
    
    // s2.name = s1.name;
    // s2.age = s1.age;
 
    // cout << s2.name << " " << s2.age << endl;

    A a1(10);
    A a2 = a1;
    a2.ptr = a1.ptr;
    cout << *a2.ptr << endl;
    // s1.ptr == s2.ptr
}