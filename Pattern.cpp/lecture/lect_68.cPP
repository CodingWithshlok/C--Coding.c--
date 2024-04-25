//
#include <iostream>
using namespace std;
class demo
{
    int x;

public:
    void getdata()
    {
        cout << "Enter the value of X:";
        cin >> x;
    }
    void putdata()
    {
        cout << "output=" << x;
    }
    void operator++() // funtion overloading using these fuction
    {
        x = x + 1;
    }
};
int main()
{
    demo aa;
    aa.getdata();
    cout << "original value=";
    aa.putdata();
    ++aa;
    cout << "Valu after result=";
    aa.operator++();
    return 0;
}