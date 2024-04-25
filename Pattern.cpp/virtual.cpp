#include <iostream>

using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "\ndisplay base";
    }
};
class derived : public base
{
public:
    virtual void display()
    {
        cout << "\ndisplay derived";
    }
};
int main()
{
    base b, *bptr;
    derived d;
    cout << "bptr points to base\n";
    bptr->display();
    cout << "bptr points to derived \n";
    bptr = &d;
    bptr->display();

    return 0;
}