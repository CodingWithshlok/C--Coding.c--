#include <iostream>
using namespace std;
class a
{
public:
    void putdata()
    {
        cout << "\nInside the class";
    }
};
class b : public a
{
public:
    void display()
    {
        cout << "\nInside the clss  b";
    }
};
class c
{
public:
    void message()
    {
        cout << "\nInside the c: ";
    }
};
class D : public b, public c
{
public:
    void print()
    {
        cout << "\nInside the class D:";
    }
};
int main()
{
    D dd;
    dd.print();
    dd.display();
    dd.message();
    dd.putdata();
    // return 0;

    return 0;
}
