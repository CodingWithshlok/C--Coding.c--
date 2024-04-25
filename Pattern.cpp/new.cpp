#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;
    float *p = new float(40.3);
    cout << "the address of p is:" << *(p) << endl;
    int *shlok = new int[2];
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 10;
    delete[] shlok;
    cout << "the value of arr[0 ] is " << arr[0] << endl;
    cout << "the value of arr[0 ] is " << arr[1] << endl;
    cout << "the value of arr[0 ] is " << arr[2] << endl;
    // delete operator using these programming

    return 0;
}