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

class C
{
public:
    void getC()
    {
        cout<<"Class C!!"<<endl;
    }
};

class D: public B,public C
{
public:
    void getD()
    {
        cout<<"Class D!!"<<endl;
    }
};

int main()
{
    D obj;
    obj.getA();
    obj.getB();
    obj.getC();
    obj.getD();
}
