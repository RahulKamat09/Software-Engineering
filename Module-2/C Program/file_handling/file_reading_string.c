#include<stdio.h>
int main()
{
    FILE *fp;
    char string1[500];
    fp = fopen("file.txt","r");
    while(fscanf(fp,"%s",string1)!=EOF)
    {
        printf("%s",string1);
    }
    fclose(fp);
    return 0;
}
