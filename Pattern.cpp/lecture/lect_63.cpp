#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void input()
    {

        cout << "Enter the number :";
        cin >> a;
    }
    void output()
    {
        cout << "output=" << a;
    }
};
class B
{
protected:
    int b;

public:
    void input()
    {
        cout << "Enter the value of b:";
    }
    void putdata()
    {
        cout << "Output=B" << b;
    }
};
class C : public A, public B
{
    int c;

public:
    void input()
    {
        cout << "Enter the value of C";
        cin >> c;
    }
    void diplay()
    {
        cout << "output=C";
    }
};
int main()
{
    C aa;
    aa.input();
    aa.diplay();
    aa.output();
    aa.putdata();
    return 0;
}