#include<stdio.h>
#include<string.h>
struct employee_data
{
    int id;
    char name[50];
    int salary;
};

int main()
{
    struct employee_data ed;
    int ch,en;
    do
    {
        printf("Press 1 For Inserts Employee\n");
        printf("Press 2 For Show all Employee\n");
        printf("Press 3 For Continue\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter The Number Of Employee:");
            scanf("%d",&en);
            for(int i=0; i<en; i++)
            {
                printf("Enter The Employee Id=");
                scanf("%d",&ed.id);
                printf("Enter The Employee Name=");
                scanf("%s",ed.name);
                printf("Enter The Employee salary=");
                scanf("%d",&ed.salary);
                printf("-------------------------\n");
            }
            break;

        case 2:
            for(int i=0; i<en; i++)
            {
                printf("Employee ID:%d\n",ed.id);
                printf("Employee Name:%d\n",ed.name);
                printf("Employee salary:%d\n",ed.salary);
            }
            break;

        default:
            printf("Incorrect Choice!!!");
            break;
        }
    }
    while(ch!=3);
}
