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

class B
{
public:
    void getB()
    {
        cout<<"Class B!!"<<endl;
    }
};

class C: public A,public B
{
public:
    void getC()
    {
        cout<<"Class C!!"<<endl;
    }
};

int main()
{
    C obj;
    obj.getA();
    obj.getB();
    obj.getC();
}
