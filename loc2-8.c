#include <stdio.h>
#include <string.h>
void main()
{
    printf("Enter size of string : ");
    int s;
    scanf("%d", &s);
    char str[s];
    printf("Enter your string : ");
    scanf("%s",str);
    int v= 0;
    int strS = strlen(str);
    for(int i = 0; i < strS; i++)
    {
        if(str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U')
        {
            v++;
        }
    }
    int c = strS - v;
    printf("Total number of consonants and vowels are respectively %d and %d",c,v);
}