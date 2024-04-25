#include <iostream>
using namespace std;
class demo
{
    int i, r;

public:
    void getdata()
    {
        cout << "Enter the number :";
        cin >> i >> r;
    }
    void putdata()
    {
        cout << "Output=" << i << r;
    }
    demo operator+(demo bb) // addition opretor overloading--->>
    {
        demo cc;
        cc.r = r + bb.r;
        cc.i = i + bb.i;
        return cc;
    }
};
int main()
{
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    aa.putdata();
    bb.putdata();
    // cc.getdata();
    cc.putdata();
    return 0;
}