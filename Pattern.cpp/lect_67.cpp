// Today will learn
// How to use Operator overloading and (+) Opertaor
#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    void getdata()
    {
        cout << "Enter the number :";
        cin >> a;
    }
    void display()
    {
        cout << "output=" << a;
    }
    demo operator+(demo bb)
    {
        demo cc;
        cc.a = a + bb.a;
        return cc;
    }
};
int main()
{
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    bb.display();
    aa.display();

    return 0;
}