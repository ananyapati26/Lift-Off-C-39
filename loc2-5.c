#include <stdio.h>
void main()
{
 printf("Enter the size of array : ");
 int s;
 scanf("%d", &s);
 int arr1[s];
 int arr2[s];

 printf("Enter elements of size : ");
 for(int i = 0; i < s; i++)
 {
    scanf("%d", &arr1[i]);
 }  
    for (int i = 0; i < s; i++)
    {
        arr2[i] = arr1[i];
    }
    
    printf("Elements of arr2: ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr2[i]);
    }
}