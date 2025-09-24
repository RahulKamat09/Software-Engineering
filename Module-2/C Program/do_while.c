#include<stdio.h>
void main()
{
    int ch,k;
    do
    {
        printf("1. C Language!\n");
        printf("2. C++ Language!\n");
        printf("3. Java Language!\n");

        printf("Enter Your Choice=");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("You Have selected C language!\n");
        break;

        case 2:
            printf("You Have Selected C++ language\n");
        break;

        case 3:
            printf("You have Selected Java Language!\n");
        break;

        default:
            printf("Incorrect Choice!\n");
        break;
        }
        printf("Press 4 for Continue!!\n");
        scanf("%d",&k);
    }while(k==4);
}
