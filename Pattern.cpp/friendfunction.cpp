#include <iostream>
using namespace std;
class shubham;
class shlok
{
private:
    int money = 10;
    friend void paji(shlok, shubham);
};
class shubham
{
private:
    int money = 10;
    friend void paji(shlok, shubham);
};
void paji(shlok r1, shubham r2)
{
    cout << "Sum=" << r1.money + r2.money;
}
int mian()
{
    shlok obj1;
    shubham obj2;
    paji(obj1, obj2);
    return 0;
}