#include <iostream>

using namespace std;
class a
{
    int row;

public:
    void
    getdata()
    {
        cout << "Enter the row:";
        cin >> row;
    }
    void putdata()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    a obj;
    obj.getdata();
    obj.putdata();

    return 0;
}