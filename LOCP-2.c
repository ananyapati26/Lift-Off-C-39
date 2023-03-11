#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
        if(n>0)
        printf("%d is positive",n);
        else if(n<0)
        printf("%d is negative",n);
        else
        printf("number is 0");
    getch();
    
}
