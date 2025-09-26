#include<stdio.h>
int main()
{
    int a[5];//Array Declaration
    a[0]=10;//Initialization
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    printf("%d\n",a[0]);//Printing Values
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
    printf("%d\n\n",a[4]);

    for(int i=0;i<5;i++)//Printing Values Using Loop
    {
        printf("%d\n",a[i]);
    }

    int b[]={10,20,30,40,50};// Array Declaration With Initialization

    for(int j=0;j<5;j++)
    {
        printf("\n%d\n",b[j]); //Printing Values Using Loop
    }
return 0;
}
