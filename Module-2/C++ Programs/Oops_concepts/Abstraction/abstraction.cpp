#include<iostream>
using namespace std;
class Base
{
    int x;
public:
    virtual void fun()=0;
    virtual void rateOfInterest()=0;

    int getX(){ return x;}
};

class ICICI : public Base
{
    int y;
public:
    void fun()
    {
        cout<<" Fun() called!!!"<<endl;
    }
    void rateOfInterest()
    {
        cout<<"ICICI's bank rate of interest is 5%"<<endl;
    }
};


class SBI : public Base
{
public:
    void fun()
    {
        cout<<" Fun() called!!!"<<endl;
    }
    void rateOfInterest()
    {
        cout<<"SBI's bank rate of interest is 15%"<<endl;
    }
};

int main()
{
    ICICI d;
    d.rateOfInterest();
    SBI s;
    s.rateOfInterest();
}
