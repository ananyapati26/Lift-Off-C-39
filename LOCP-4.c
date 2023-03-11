#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,c,a,s,m,d;
printf("enter first number:\n");
printf("enter second number:\n");
scanf("%d %d",&n1,&n2);
printf("Choose your operation:");
scanf("%d",&c);
switch(c)
{
 
    case 1:
    {
    a=n1+n2;
    printf("sum: %d",a);
    break;
    }

    case 2:
    {
    s=n1-n2;
    printf("sub:%d",s);
    break;
    }

    case 3:
    {
    m=n1*n2;
    printf("mul:%d",m);
    break;
    }
  case 4:
    {
    d=n1/n2;
    printf("div:%d",d);
    break;
    }

    default:
    printf("invalid input");
}
return 0;
}