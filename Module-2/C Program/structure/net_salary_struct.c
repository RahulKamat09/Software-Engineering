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
    printf("DA=%f",ns.da);

    return 0;
}
