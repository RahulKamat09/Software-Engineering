#include<stdio.h>
#include<string.h>
struct net_salary
{
    int id;
    char name[40];
    float basic_salary,da,hra,gross,tax,net_salary;
};

int main()
{
    struct net_salary ns;

    printf("Emp id=");
    scanf("%d",&ns.id);
    printf("Emp Name=");
    scanf("%s",ns.name);
    printf("Basic Salary=");
    scanf("%f",&ns.basic_salary);

    ns.da = (ns.basic_salary*2)/100;
    printf("DA = %f\n",ns.da);

    ns.hra = (ns.basic_salary*3)/100;
    printf("HRA = %f\n",ns.hra);

    ns.gross = ns.basic_salary + ns.da + ns.hra;
    printf("Gross=%f\n",ns.gross);

    ns.tax = (ns.gross*3)/100;
    printf("Tax=%f\n",ns.tax);

    ns.net_salary = ns.gross - ns.tax;
    printf("Net Salary=%f\n",ns.net_salary);

    return 0;
}
