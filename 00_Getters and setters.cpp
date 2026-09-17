#include<bits/stdc++.h>
using namespace std;
#define ll long long 


class Student {
    private:
       string name;

    public:

    Student() {

    }

    void setName(string s) {
        name = s;
    }

    string getName() {
        return name;
    }
};

int main() {
    Student s;

    s.setName("Raj");

    cout<<s.getName()<<endl;
    return 0;
}