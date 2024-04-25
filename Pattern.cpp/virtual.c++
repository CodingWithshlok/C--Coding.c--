#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "Base class";
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Derived class:";
    }
};
int main()
{
    A *bptr;
    A aa;
    bptr = &aa;
    bptr->show();
    return 0;
}
