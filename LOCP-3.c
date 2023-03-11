#include<stdio.h>
void main()
{
    int n,s=0,k,r;
    printf("enter a number:");
    scanf("%d",&n);
    k=n;
    do
    {
        r=k%10;
        s=s+r;
        k=k/10;
    }while(k!=0);
    printf("sum of digits of %d is %d",n,s);
}