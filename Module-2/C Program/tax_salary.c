#include<stdio.h>
void main()
{
    int Monthly_Salary;
    int Net_salary;
    int tax;
    printf("Enter Your Monthly Salary:");
    scanf("%d",&Monthly_Salary);
    int Annual_salary = Monthly_Salary*12;
    printf("Annual Salary:%d\n",Annual_salary);
    if(Annual_salary>=300000 && Annual_salary<=500000)
    {
        tax=3;
    }
    else if(Annual_salary>=500000 && Annual_salary<=700000)
    {
        tax=5;
    }
    else if(Annual_salary>=700000 && Annual_salary<=900000)
    {
        tax=7;
    }
    else{
        Net_salary = Annual_salary;
        printf("Net Salary:%d\n",Net_salary);
    }

    int tax_amt= (Annual_salary*tax)/100;
    printf("Tax Amount:%d\n",tax_amt);
    Net_salary = Annual_salary - tax_amt;
    printf("Net Salary:%d\n",Net_salary);

}
