#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    void getdata()
    {
        cout << "Entr the number :";
        cin >> a;
    }
    void putdata()
    {
        cout << "\noutput=" << a;
    }
    bool operator==(demo bb)
    {
        if (a == bb.a)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    demo aa, bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    if (aa == bb)
        cout << "Value are equal:";
    else
        cout << "Not equals to:";

    return 0;
}