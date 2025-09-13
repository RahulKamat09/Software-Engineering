#include<stdio.h>
int main()
{
    //Program To calculate Net Salary!!

    int basic_salary = 10000;//Basic Salary
    int da = (basic_salary*2)/100;//calculation of DA
    int hra = (basic_salary*3)/100;//calculation Of HRA
    int gross = basic_salary + da +hra;//calculation of GROSS
    int tax = (gross*3)/100;//calculation of tax
    int net_salary = gross - tax;//The Perfect Net Salary

    printf("Basic Salary=%d\n",basic_salary);
    printf("DA=%d\n",da);
    printf("HRA=%d\n",hra);
    printf("Gross Salary=%d\n",gross);
    printf("Tax=%d\n",tax);
    printf("Net salary =%d\n",net_salary);

    return 0;
}
