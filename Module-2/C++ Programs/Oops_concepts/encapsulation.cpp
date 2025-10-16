#include<iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;
    string city;
public:
    void setRollNo(int r)
    {
        roll_no=r;
    }
    int getRollNo()
    {
        return roll_no;
    }
};
int main()
{
    student s1;
    s1.setRollNo(101);
    cout<<s1.getRollNo()
}
