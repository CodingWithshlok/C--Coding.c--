#include <iostream>
using namespace std;
class demo
{
    int age, employee, id;

public:
    void getdata()
    {
        cout << "Enter age ,employee,i.d:";
        cin >> age >> employee >> id;
    }
    void putdata()
    {
        
    }
};
int main()
{
    demo obj;
    obj.getdata();
    obj.putdata();
}