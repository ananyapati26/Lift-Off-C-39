#include <stdio.h>
void main()
{
printf("Enter the size of your 1st Array : ");
int s1;
scanf("%d", &s1);
printf("Enter the size of your 2nd Array : ");
int s2;
scanf("%d", &s2);
int Ar1[s1];
int Ar2[s2];

for(int i = 0; i < s1; i++)
{
  scanf("%d", &Ar1[i]);
}
for(int i = 0; i < s2; i++)
{
 scanf("%d", &Ar2[i]); 
}

int size = s1+s2;
int newArray[size];
for(int i = 0; i < size; i++)
{
  if(i < s1)
  {
    newArray[i] = Ar1[i];
  }
  else
  {
    newArray[i] = Ar2[i-s1];
  }
}

for(int i = size-1; i >= 0; i--)
{
 printf("%d\t", newArray[i]);
}

}