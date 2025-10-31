#include<iostream>
using namespace std;
class Box
{
    double width,height;
public:
    friend void printWidth( Box box1 );
    void setWidth(double wid,double hi);
};

void Box::setWidth(double wid,double hi)
{
    width=wid;
    height=hi;
}

void printWidth(Box box1)
{
    cout<<"Width Is:"<<box1.width<<endl;
    cout<<"Height Is:"<<box1.height<<endl;
}

int main()
{
    Box box;
    box.setWidth(10.0,20.0);
    printWidth( box );

    Box box2;
    box2.setWidth(30.0,20.0);
    printWidth(box2);

}
