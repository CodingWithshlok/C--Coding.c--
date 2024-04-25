#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int x, y;
    cout << "Enter the two number :";
    cin >> x;
    y = fact(x);
    cout << "Otput=" << y;
    return 0;
}
int fact(int x)
{
    if (x > 1)
        return (x * fact(x - 1));
    else
        return 1;
}