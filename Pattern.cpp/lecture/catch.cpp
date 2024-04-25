#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the nuber:";
    cin >> a >> b;
    try
    {

        if (a != 0)
        {
            c = a / b;
            cout << "division =0" << c;
        }
        else
        {
            throw(b);
        }
    }
    catch (int b)
    {
        cout << "Division by=B" << b;
    }
    return 0;
}