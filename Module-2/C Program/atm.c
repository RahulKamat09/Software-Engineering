#include<stdio.h>
void main(){
    printf("Welcome To The ATM!!\n\n");
    int amount = 50000;
    int main_pin = 3009;
    int user_pin;
    printf("Please Enter The Pin:");
    scanf("%d",&user_pin);
    if(user_pin == main_pin){
        printf("Pin Verified Successfully!!!\n\n");
        printf("Press 1 For Balance Inquiry.\n");
        printf("Press 2 For Deposit Amount.\n");
        printf("Press 3 For Withdrawal Amount.\n");
        int ch;
        printf("Enter The Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Current Balance Is:%d\n",amount);
            break;

            case 2:
            int depo;
            printf("Enter The Amount:");
            scanf("%d",&depo);
            printf("Deposited Amount is:%d\n",depo);
            amount += depo;
            printf("Current Balance Is:%d\n",amount);
            break;

            case 3:
            int withd;
            printf("Enter The Amount:");
            scanf("%d",&withd);
            printf("Deposited Amount is:%d\n",withd);
            amount -= withd;
            printf("Current Balance Is:%d\n",amount);
            break;

            default:
            printf("Incorrect Choice!!!!");
            break;

        }
    }
    else{
        printf("Incorrect Pin!!!!");
    }
}
