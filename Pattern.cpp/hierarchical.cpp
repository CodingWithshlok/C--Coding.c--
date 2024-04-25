// These is program to learn Hierachical Inheritence ---->>
#include <iostream>

using namespace std;
class a
{
public:
    void message()
    {
        cout << "\nEnter the number :";
        // cin  kkk
    }
};
class b : public a
{
public:
    void display()
    {
        cout << "\nInside class b:";
    }
};
class c : public a
{
public:
    void getdata()
    {
        cout << "\ninside class c";
    }
};
int main()
{
    b aa;
    c bb;
    aa.display();
    aa.message();
    bb.getdata();
    bb.message();
    return 0;
}