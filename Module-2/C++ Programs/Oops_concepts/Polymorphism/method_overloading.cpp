#include<iostream>
using namespace std;
class Addition
{
public:
    void add(int a,int b)
    {
        cout<<"sum: "<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<"sum: "<<a+b+c<<endl;
    }
    void add(int a,int b,int c,int d)
    {
        cout<<"sum: "<<a+b+c+d<<endl;
    }
};

int main()
{
    Addition a;
    a.add(10,20);
    a.add(10,20,30);
    a.add(10,20,30,40);
}
