#include<stdio.h>
int display();
int max();
int min();
int main()
{
    int a[5];
    for(int i = 0;i<5;i++)
    {
        printf("Enter The Elements Of Array:");
        scanf("%d",&a[i]);
    }
    display(a);
    printf("Maximum value of Array Element = %d\n", max(a));
    printf("Minimum value of Array Element = %d\n", min(a));
}

int display(int arr[])
{
    printf("Values Are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int max(int arr[])
{
    int max = arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[])
{
    int min = arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
