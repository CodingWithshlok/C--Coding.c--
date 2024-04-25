#include <iostream>
using namespace std;
class a
{
    int roll;

public:
    void getroll()
    {
        cout << "Enter the number :";
        cin >> roll;
    }
    void putroll()
    {
        cout << "Output=" << roll;
    }
};
class b : public a
{
    int sub1, sub2;

public:
    void getsub()
    {
        cout << "Enter two subject marks :";
        cin >> sub1 >> sub2;
    }
    void putsub()
    {
        cout << "\nMarks=" << sub1 << "\nmarks=" << sub2;
    }
};
class c : public b
{
    int sptm;

public:
    void gettotal()
    {
        cout << "Enter the sptm:";
        cin >> sptm;
    }
    void puttotal()
    {
        int c;
        putroll();
        putsub();
        c = sub1 + sub2;
        cout << "Output=" << c;
    }
};
int mian()
{
    c aa;
    aa.getroll();
    aa.getsub();
    aa.gettotal();
    aa.puttotal();
    return 0;
}