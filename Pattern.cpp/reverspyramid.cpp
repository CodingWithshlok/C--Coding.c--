#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int k = n; k >= i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
