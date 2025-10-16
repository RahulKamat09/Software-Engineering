#include<iostream>
using namespace std;
int main()
{
    int basic_salary;
    cout<<"Enter The Basic Salary=";
    cin>>basic_salary;
    int da = (basic_salary*2)/100;
    int hra = (basic_salary*3)/100;
    int gross = basic_salary + da + hra;
    int tax = (gross*3)/100;
    int net_salary = gross - tax;

    cout<<"Basic Salary="<<basic_salary<<endl;
    cout<<"DA="<<da<<endl;
    cout<<"HRA="<<hra<<endl;
    cout<<"GROSS="<<gross<<endl;
    cout<<"Net salary="<<net_salary<<endl;
}
