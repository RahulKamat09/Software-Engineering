#include<stdio.h>
int display(int a[])
{
    printf("Printing Array Element:\n");
    for(int i = 0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10};
    display(a);
    display(b);
}
