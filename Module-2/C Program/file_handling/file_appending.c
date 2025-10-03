#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    int id;
    char name[30];
    float salary;
    fp = fopen("file.txt","a");
    if(fp == NULL)
    {
        printf("File Does Not Exist!!");
        return 0;
    }
    printf("Enter THe id:");
    scanf("%d",&id);
    fprintf(fp,"ID=%d\n",id);

    printf("Enter THe Name:");
    scanf("%s",name);
    fprintf(fp,"Name=%s\n",name);

    printf("Enter The Salary:");
    scanf("%f",&salary);
    fprintf(fp,"salary=%f\n",salary);

    fclose(fp);
    return 0;
}
