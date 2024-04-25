#include <iostream>
using namespace std;
class A
{
private:
    static int x; // static data member
public:
    static void fun()
    { // static data member function
        cout << "Value=" << x << endl;
    }
};
int A::x = 10;
int main()
{
    A obj;
    obj.fun();
    return 0;
}
// Not using static data member function
class demo
{
public:
    static int x;
};
int demo::x = 10;
int main()
{
    cout << "x=" << demo::x;
    return 0;
}
