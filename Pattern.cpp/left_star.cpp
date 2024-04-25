#include <iostream>
using namespace std;
int main()
{
    // int row;
    // cout << "Enter the rowvalue";
    // cin >> row;
    // for (int i = row; i > 0; i--)
    // {
    //     for (int j = 0; j <= row; j++)
    //     {
    //         if (j >= i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }
    int n;
    cout << "enter the number :";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int b = 1;
        while (b < n - i)
        {
            cout << " ";
            b = b + 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << "\n";
        i++;
    }
    return 0;
}