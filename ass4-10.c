#include<stdio.h>
int main()
{
    int i,num=5,p=0;
    printf("Table of 5 is : ");
    for(i=1;i<=10;i++)
    {
        p=num*i;
        printf("5 * %d = %d",i,p);
        printf("\n");
    }
return 0;
}