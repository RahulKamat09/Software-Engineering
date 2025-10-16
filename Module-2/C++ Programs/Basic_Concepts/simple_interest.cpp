#include<iostream>
using namespace std;
int main()
{
    int principle,interest,time;
    cout<<"Enter The Principle Amount=";
    cin>>principle;
    cout<<"Enter The interest Rate=";
    cin>>interest;
    cout<<"Enter The amount of period=";
    cin>>time;
    int simple_interest=(principle*interest*time)/100;
    cout<<"Simple Interest="<<simple_interest<<endl;
    int rest_amount = (principle+simple_interest);
    cout<<"Rest Amount="<<rest_amount;

}
