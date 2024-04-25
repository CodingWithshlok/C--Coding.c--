#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int i;
    cout << "Entr the number :";
    cin >> i;
    prime(i);
    return 0;
}
void prime(int i)
{
    int x, count = 0;
    for (int x = 1; x <= i; x++)
    {
        if (i % x == 0)
            count++;
    }
    if (count == 2)
        cout << "prime:";
    else
        cout << "Not prime number :";
}
