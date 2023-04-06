/*k is a pointer to a pointer to a pointer to a char.

The declaration char ****k; defines k as a pointer to a pointer to a pointer to a pointer to a char. Each * represents a level of indirection. So, k has four levels of indirection, which means it is a pointer to a pointer to a pointer to a char.
*/




/* (b) void main(){
    int k=5;
    int *p=&k;
    int **m=&p;
    **m=6;
    printf("%d\n",k);
    }
Ans. iii) 6
the output of the program is 6
*/