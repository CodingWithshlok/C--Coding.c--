#include <iostream>
using namespace std;
class a
{
public:
    void display()
    {
        cout << "These is a class";
    }
};
class b : public a
{
public:
    void display()
    {
        cout << "\nThese is b class\n";
        // a::display(); --->>First Methode to call first class
    }
};

int main()
{
    b aa;
    aa.display();
    // aa.a::display();--->>These is scound methode to call first class;

    return 0;
}