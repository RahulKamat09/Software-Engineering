#include<stdio.h>
int display();
int even();
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter The Value%d:",i);
        scanf("%d",&a[i]);
    }
    display(a);
    even(a);
}

int display(int x[])
{
    printf("Values Are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",x[i]);
    }
}

int even(int y[])
{
    printf("Even Values Are:\n");
    for(int i=0;i<5;i++)
    {
        if(i%2!=0){
            printf("%d\n",y[i]);
        }
    }
}

