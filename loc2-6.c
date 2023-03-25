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
    int c;
    int num = 0; int element;
    for(int i = 0; i < s; i++)
    {
        c = 0;
        int target = arr[i];
        for(int j = 0; j < s; j++)
        {
            if(target == arr[j])
            {
                c++;
            }
        }
        if(num < c)
        {
            num = c;
            element = target;
        }
    }
    printf("Maximum occuring integer in your array is %d",element);
}