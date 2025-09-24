#include<stdio.h>
void main(){
    int a,b;
    printf("Enter The Value of A:");
    scanf("%d",&a);
    printf("Enter The Value Of B:");
    scanf("%d",&b);
    printf("Value Of a Before Swapping:%d\n",a);
    printf("Value Of b Before Swapping:%d\n",b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Value Of a After Swapping:%d\n",a);
    printf("Value Of b After Swapping:%d\n",b);
}
