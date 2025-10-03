#include <stdio.h>
#include <string.h>

struct employee_data
{
    int id;
    char name[50];
    int salary;
};

int main()
{
    struct employee_data ed[100];
    int ch, en = 0,eid;

    do
    {
        printf("Press 1 For Insert Employees\n");
        printf("Press 2 For Show All Employees\n");
        printf("Press 3 For Search Employee\n");
        printf("Press 4 For Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter The Number Of Employees: ");
            scanf("%d", &en);
            for (int i = 0; i < en; i++)
            {
                printf("\nEnter Employee %d Details:\n", i + 1);
                printf("Enter The Employee Id = ");
                scanf("%d", &ed[i].id);

                printf("Enter The Employee Name = ");
                scanf("%s", ed[i].name);  // name is string

                printf("Enter The Employee Salary = ");
                scanf("%d", &ed[i].salary);

                printf("-------------------------\n");
            }
            break;

        case 2:
            if (en == 0)
            {
                printf("No Employees Found! Please insert first.\n");
            }
            else
            {
                printf("\n--- Employee List ---\n");
                for (int i = 0; i < en; i++)
                {
                    printf("Employee ID: %d\n", ed[i].id);
                    printf("Employee Name: %s\n", ed[i].name);
                    printf("Employee Salary: %d\n", ed[i].salary);
                    printf("-------------------------\n");
                }
            }
            break;

        case 3:
            if(en == 0)
            {
                printf("Employee Not Found Please Enter FIrst!!!!\n");
            }
            else
            {
                int found=0;
                printf("Enter Employee Id TO Find:");
                scanf("%d",&eid);
                for(int i=0; i<en; i++)
                {
                    if(ed[i].id == eid )
                    {
                        printf("Employee Found!!\n\n");
                        printf("Employee ID: %d\n", ed[i].id);
                        printf("Employee Name: %s\n", ed[i].name);
                        printf("Employee Salary: %d\n\n", ed[i].salary);
                        found=1;
                        break;
                    }
                }
                if (!found) {
                    printf("Employee with ID %d not found.\n", eid);
                }
            }
            break;
        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Incorrect Choice!!!\n");
            break;
        }
    }
    while (ch != 4);

    return 0;
}
