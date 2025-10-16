#include<stdio.h>
int main()
{
    int amount;
    printf("Enter The Amount=");
    scanf("%d",&amount);
    int temp = amount;
    int notes[] = {2000,500,200,100,50,20,10,5,2,1};
    int count[10]= {0};
    for(int i=0; i<10; i++)
    {
        if(temp>=notes[i])
        {
            count[i]=temp/notes[i];
            temp =temp%notes[i];
        }
    }

    printf("Amount is=%d\n",amount);
    for(int i=0; i<10; i++)
    {
        if (count[i] > 0)
        {
            printf("%4d = %d\n", notes[i], count[i]);
        }
    }


}


/*#include <stdio.h>

int main()
{
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count, i;

    printf("\nTotal Amount = %d\n", amount);
    printf("Breakdown:\n");

    for (i = 0; i < 10; i++)
    {
        if (amount >= notes[i])
        {
            count = amount / notes[i];
            amount = amount % notes[i];
            printf("%d = %d\n", notes[i], count);
        }
    }

    return 0;
}
*/
