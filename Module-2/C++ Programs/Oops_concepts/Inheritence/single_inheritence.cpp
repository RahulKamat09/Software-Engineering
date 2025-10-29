#include<iostream>
using namespace std;
class A
{
public:
    void getA()
    {
        cout<<"Class A!!"<<endl;
    }
};

class B: public A
{
public:
    void getB()
    {
        cout<<"Class B!!"<<endl;
    }
};

int main()
{
    B obj;
    obj.getA();
    obj.getB();
}
