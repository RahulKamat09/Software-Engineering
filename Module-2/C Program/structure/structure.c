#include<stdio.h>
#include<string.h>
struct employee
{
    int eid;
    char name[50];
    float salary;
};

void main()
{
    /*struct employee e;
    e.eid=101;
    strcpy(e.name,"Rahul Kamat");
    e.salary=10000;

    printf("Emp id=%d\n",e.eid);
    printf("Emp name=%s\n",e.name);
    printf("Emp Salary=%.2f\n",e.salary);
    */

    struct employee e[5]=
    {   {1, "Amit", 85.5},
        {2, "Rahul", 90.0},
        {3, "Neha", 78.0}
    };

    for(int i=0; i<3; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n",
               e[i].eid, e[i].name, e[i].salary);
    }



}
