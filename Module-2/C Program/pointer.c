#include<stdio.h>
void main()
{
    int PIN = 123;
    int *b=&PIN;
    printf("PIN Address=%x\n",&PIN);
    printf("Pointer address=%x\n",b);
    printf("Value Address = %d\n",*b);
    PIN=432;
    printf("After Value Change=%d\n",*b);
    *b=456;
    printf("Pin Value=%d\n",PIN);
}
