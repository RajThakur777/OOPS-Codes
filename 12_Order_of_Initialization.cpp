#include<iostream>
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    Test() : b(20), a(b)
    {
        cout << a << " " << b << endl;
    }

    Test() : b(20), a(b)
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    Test t1;
    
}