#include<stdio.h>
void main(){
    //Program to check if the entered age is Eligible for voting or not

    int age;
    printf("Enter THe Age:");
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible!!!"); //True Block!!!!!
    }
    else{
        printf("Not Eligible"); // False Block!!!!!!!
    }
}
