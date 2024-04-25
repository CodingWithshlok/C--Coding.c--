#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number :";
    cin >> x;
    try
    { 
        if (x == 0)
            throw(x);
        if (x == 0)
            throw(5.5);
        if (x == 1000)
            throw('x');
    }
    catch (int x)
    {
        cout << "Value of x is zero" << x;
    }
    catch (char x)
    {
        cout << "Value of char:";
    }
    catch (char x)
    {
        cout << "Value of x is float:" << x;
    }
    return 0;
}
