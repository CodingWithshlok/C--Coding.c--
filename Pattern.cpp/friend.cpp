#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    void getdata();
        friend int sum(demo);
}; 
void demo::getdata(){
    cout<<"Enter the number ::";
    cin>>a>>b;
}
int sum(demo aa){
    return (aa.a+aa.b);
}
    