#include<iostream>
using namespace std;
class calc
{
public:
    void add(int a,int b){
        cout<<"Addition:"<<a+b<<endl;
    }
};
class sci:public calc
{
public:
    void square(int a)
    {
        cout<<"Square is="<<a*a<<endl;
    }
};
int main()
{
    sci s;
    s.add(12,12);
    s.square(10);
    return 0;
}
