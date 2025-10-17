/*(2) Parameterized Constructor

Constructor that takes arguments to initialize an object with specific values.

Example:*/


#include<iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;
    string city;

    student(int r,string n,string c)
    {
        roll_no = r;
        name = n;
        city = c;
    }
    void display()
    {
        cout<<"Roll_no:"<<roll_no<<",Name:"<<name<<", City:"<<city<<endl;
    }
};

int main()
{
    student s1(101,"Rahul","Ahmedabad");
    student s2(102,"Prashant","Vadodara");
    student s3(103,"Jay","Jaipur");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
