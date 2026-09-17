#include <iostream>
using namespace std;

int main() {
    
    int* p1; // pointer to int
    int a = 10; //int variable with value 10
    p1 = &a; //assign address of a to p1
    cout << *p1 << endl;
    cout << p1 << endl;
    cout << &p1 << endl;
    return 0;

}
