#include<stdio.h>
 void main()
{
    int num,rev=0,digit;
    printf("Enter The Number= ");
    scanf("%d",&num);
    while(num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num /10;
    }

    printf("Reversed Number = %d",rev);
}
