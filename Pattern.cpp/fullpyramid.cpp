#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the number:";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int b = 1;
    //     while (b <= n - i)
    //     {
    //         cout << " ";
    //         b++;
    //     }
    //     int j = 1;
    //     while (j <= 2 * i - 1)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     i++;
    //     cout << "\n";
    // }

    int n;
    cout << "Enter the number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}