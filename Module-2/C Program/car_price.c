#include<stdio.h>
void main()
{

    printf("1.BMW\n");
    printf("2.AUDI\n");
    printf("3.MARUTI\n");
    int choice1;
    printf("Enter Your Choice:");
    scanf("%d",&choice1);
    switch(choice1)
    {
        case 1:
            printf("BMW Showroom!!\n\n");
            printf("1.BMW M3 COMPETITION\n");
            printf("2.BMW M4 COMPETITION\n");
            printf("3.BMW M8 COMPETITION\n\n");
            int choice2;
            printf("Enter Your Choice For BMW Model:");
            scanf("%d",&choice2);
            switch(choice2)
            {
                case 1:
                    printf("BMW M3 COMPETITION PRICE : 45000000/-");
                break;

                case 2:
                    printf("BMW M4 COMPETITION PRICE : 75000000/-");
                break;

                case 3:
                    printf("BMW M8 COMPETITION PRICE : 95000000/-");
                break;

                default:
                    printf("Choice Is Invalid");
                break;
            }

        break;

        case 2:
        printf("AUDI Showroom!!\n\n");
        printf("1.AUDI Q3\n");
            printf("2.AUDI A4\n");
            printf("3.AUDI A3\n\n");
            int choice3;
            printf("Enter Your Choice For AUDI Model:");
            scanf("%d",&choice3);
            switch(choice3)
            {
                case 1:
                    printf("AUDI Q3 PRICE : 4300000/-");
                break;

                case 2:
                    printf("AUDI A4 PRICE : 4600000/-");
                break;

                case 3:
                    printf("AUDI A3 PRICE : 4200000/-");
                break;

                default:
                    printf("Choice Is Invalid");
                break;
            }

        break;

        case 3:
            printf("MARUTI Showroom!!\n\n");
            printf("1.MARUTI BREZZA\n");
            printf("2.MARUTI BALENO\n");
            printf("3.MARUTI ALTO\n\n");
            int choice4;
            printf("Enter Your Choice For MARUTI Model:");
            scanf("%d",&choice4);
            switch(choice4)
            {
                case 1:
                    printf("MARUTI BREZZA PRICE : 850000/-");
                break;

                case 2:
                    printf("MAARUTI BALENO PRICE : 750000/-");
                break;

                case 3:
                    printf("MARUTI ALTO PRICE : 650000/-");
                break;

                default:
                    printf("Choice Is Invalid");
                break;
            }

        break;

        default:
        printf("Enter Valid Choice Between 3!!!");
        break;
    }
}
