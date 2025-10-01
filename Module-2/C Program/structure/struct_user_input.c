#include<stdio.h>
struct student
{
    int sid;
    char sname[40];
    float marks;
};
int main()
{
    struct student s;

    printf("Student id=");
    scanf("%d",&s.sid);

    printf("Student name=");
    scanf("%s",s.sname);

    printf("Student marks=");
    scanf("%f",&s.marks);

    printf("Student id=%d\n",s.sid);
    printf("Student name=%s\n",s.sname);
    printf("Student marks=%f\n",s.marks);

    return 0;
}
