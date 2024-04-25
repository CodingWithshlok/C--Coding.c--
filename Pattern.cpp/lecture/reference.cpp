// When a variable is declared as a refremce ,it becomes an alternative name for an existing variable.A variable can be declared as a reference by putting '&' in the declaration-->>
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &ref = x;
    ref = 20;
    cout << "x=" << ref << "\n";
    x = 30;
    cout << "ref=" << ref << '\n';

    return 0;
}