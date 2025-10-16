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
        cout<<"Default Constructor"<<endl;
    }
};
int main()
{
    student s1,s2;
    return 0;
}
