#include<stdio.h>
#include<string.h>
union employee
{
    int eid;
    char name[50];
    float salary;
};

void main()
{
    union employee e[3];
    e[0].eid=101;
    printf("Emp id=%d\n",e[0].eid);
    strcpy(e[0].name,"Rahul Kamat");
    printf("Emp name=%s\n",e[0].name);
    e[0].salary=10000;
    printf("Emp salary=%.2f\n",e[0].salary);

}
