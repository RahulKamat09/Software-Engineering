#include<stdio.h>
void main()
{

    int maths,english,science;
    printf("Enter The Marks Of Maths:");
    scanf("%d",&maths);//Marks Of Maths!
    printf("Enter The Marks Of English:");
    scanf("%d",&english);//Marks Of English!
    printf("Enter The Marks Of Science:");
    scanf("%d",&science);//Marks Of Science!

    if(maths<=100 && english<=100 && science<=100)//Marks Should be in between 100!!
    {
        if(maths>=40 && english>=40 && science>=40)// Marks Should be greater Than 40!!
        {
            int total = maths + english + science;// Total of all three
            printf("Total of Subjects is:%d\n",total);
            int percentage = (total*100)/300;//Percentage
            printf("Percentage of Subjects is:%d\n",percentage);
            if(percentage>=90 && percentage<=100 )//Grading Options on Percentage
            {
                printf("Grade A+");
            }
            else if(percentage>=80 && percentage<=90 )
            {
                printf("Grade A");
            }
            else if(percentage>=70 && percentage<=80 )
            {
                printf("Grade B+");
            }
            else if(percentage>=60 && percentage<=70 )
            {
                printf("Grade A");
            }
            else if(percentage>=50 && percentage<=60 )
            {
                printf("Grade C+");
            }
            else if(percentage>=40 && percentage<=50 )
            {
                printf("Grade C");
            }
            else
            {
                printf("Fail!!");
            }
        }
        else
        {
            printf("Poor Performance!!!");
        }

    }
    else
    {
        printf("Invalid Marks!!!");
    }
}
