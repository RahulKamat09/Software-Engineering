#include<stdio.h>
void main()
{
    int arr[3][3] = {{10,20,30},{40,50,60},{70,80,90}}; // 2D Array Declaration with initialization

    for(int i=0; i<3; i++)
    {
        for(int j=i; j<=i; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //printf("%d ",arr[0][0]);
    //printf("%d ",arr[1][1]);
    //printf("%d ",arr[2][2]);

    /*int arr[3][3];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }*/
}
