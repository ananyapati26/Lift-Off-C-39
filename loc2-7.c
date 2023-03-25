#include <stdio.h>

void main()
{
    printf("Enter size of Array : ");
    int s;
    scanf("%d", &s);
    int arr[s];
    
    printf("Input Elements in array : ");
    for(int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < s; j++)
    {
        for(int i = 1; i < s; i++)
        {
        
          if(arr[i] < 0)
          {
        
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
          }
        }
    }
    printf("Elements of array : ");
    for(int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}