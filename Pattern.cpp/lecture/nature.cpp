// These is program to learn -->>Sum of  two number  using recursion
//  1+2=3;
//  1+2+3=6
//  1+2+3+4=10
#include <iostream>
using namespace std;
int natural(int a, int b) // fuction
{
    if (a > b)
    {
        return 0;
        return a + natural(a + 1, b);
    }
}
int main()
{
    int a, b;
    cout << "Enter the Stating and last number :";
    cin >> a >> b;
    cout << "Sum of number " << natural(a, b);
    return 0;
}