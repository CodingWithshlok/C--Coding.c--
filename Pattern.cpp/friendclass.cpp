#include <iostream>
using namespace std;
class A
{
    int a = 10, b = 20;

public:
    void show()
    {
        cout << a << " " << b;
    }
    friend class B;
    class B
    {
    };
    class B
    {
    public:
        void add(A r)
        {
            int add = r.a + r.b;
            cout << "Sum of A and B::";
        }
    };
};
main()
{
    A obj;
    B obj1;
    obj1.add();
    obj.show();
    return 0;
}