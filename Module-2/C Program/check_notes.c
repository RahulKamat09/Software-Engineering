#include<stdio.h>
void main(){
    int a;
    printf("Enter The Value of Note:");
    scanf("%d",&a);
    if(a==10){
        printf("10 Note Available");
    }
    else if(a==20){
        printf("20 Note Available");
    }
    else if(a==50){
        printf("50 Note Available");
    }
    else if(a==100){
        printf("100 Note Available");
    }
    else{
        printf("%d Note Not Available",a);
    }
}
