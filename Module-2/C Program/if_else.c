#include<stdio.h>
void main(){
    //Program to check if the entered Alphabet Is Vowel Or Consonant!!!!

    char alphabet;
    printf("Enter The alphabet:");
    scanf("%c",&alphabet);

    if(alphabet >= 'a' && alphabet <='z' || alphabet <='A' && alphabet>='Z')
    {
        if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'
           || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
        {
            printf("Its A Vowel!!"); //True Block!!!!!
        }
        else
        {
            printf("Its A Consonant"); // False Block!!!!!!!
        }
    }
    else
    {
        printf("Enter A Valid Alphabet!!!");
    }
}
