#include<stdio.h>
void main(){

    //Program To calculate Simple Interest!!

    int principle;//Amount
    printf("Enter The Amount:");
    scanf("%d",&principle);
    int interest;//Interest
    printf("Enter The Interest:");
    scanf("%d",&interest);
    int time_years;//time of years
    printf("Enter The Time of Years:");
    scanf("%d",&time_years);

    int simple_interest= (principle * interest * time_years)/100; //calculation of SI
    int totalAmount = principle + simple_interest;//Total Amount After SI

    printf("Principle:%d\n",principle);
    printf("Interest:%d\n",interest);
    printf("Time Of Years :%d\n",time_years);
    printf("Simple Interest :%d\n",simple_interest);
    printf("Total Amount:%d\n",totalAmount);

}
