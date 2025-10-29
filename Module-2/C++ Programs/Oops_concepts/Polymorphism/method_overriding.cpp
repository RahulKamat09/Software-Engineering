#include<iostream>
using namespace std;
class RBI
{
public:
    void rateOfInterest()
    {
        cout<<"RBI"<<endl;
    }
};
class SBI:public RBI
{
    public:
    void rateOfInterest()
    {
        cout<<"SBI"<<endl;
    }
};

int main()
{
    SBI obj;
    obj.rateOfInterest();
}
