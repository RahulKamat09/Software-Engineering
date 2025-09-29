#include<stdio.h>
int display();
int addition();
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter The Elements Of Array:");
        scanf("%d",&a[i]);
    }
    display(a);
    addition(a);
}

int display(int a[])
{
    printf("Values Are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}

int addition(int x[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum = sum + x[i];
    }
    return sum;
}
