#include<stdio.h>
 void main()
{
    int num,sum=0,digit,originalNum;
    printf("Enter The Number= ");
    scanf("%d",&num);

    originalNum = num;

    while(num != 0)
    {
        digit = num % 10;
        sum = sum +(digit * digit * digit);
        num = num /10;
    }

    if(sum == originalNum)
    {
        printf("%d is an Armstrong Number",originalNum);
    }
    else
    {
        printf("%d is not an Armstrong Number!!",originalNum);
    }
}
