#include<iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;
    string city;
    student()
    {
        cout<<"Default constructor"<<endl;
    }
    student(int roll_no,string name,string city)
    {
        this->roll_no=roll_no;
        this->name=name;
        this->city=city;
    }
    void showStudent()
    {
        cout<<"Parameterized Constructor"<<endl;
        cout<<roll_no<<" "<<name<<" "<<city<<endl;
    }
};
int main()
{
    student s1;
    student s2(101,"Rahul","ahmedabad");
    s2.showStudent();
}
