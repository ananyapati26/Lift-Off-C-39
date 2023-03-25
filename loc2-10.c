#include <stdio.h>
#include <string.h>
void main() 
{
    printf("Enter size of your string : ");
    int s;
    scanf("%d",&s);
    char str[s];
    int a, d, spec;

    a = d = spec = 0;

    printf("Enter a string: ");
    scanf("%s",str);

    for(int i = 0; i < sizeof(str); i++) 
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            a++;
        }
        else if(str[i] >= '0' && str[i] <= '9') 
        {
            d++;
        }
        else 
        {
            spec++;
        }
    }

    printf("Total Alphabets: %d\n", a);
    printf("Total Digits: %d\n", d);
    printf("Total Special Characters: %d\n", spec);
}