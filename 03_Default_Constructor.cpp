#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    //Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }
};

int main()
{
    Student s1;
    cout << s1.name << " " << s1.age << endl;
    return 0;
}