#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "These is constructure:" << endl;
    }
    ~demo()
    {
        cout << "These is destructure:" << endl;
    }
};
int main()
{
    demo obj;

    return 0;
}