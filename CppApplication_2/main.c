#include <stdio.h>
/* Patrick Coe - Fall 2011 - First week exersice, 6.

 6. */

int i=10,j=5;
long ix=50.5;
short s=20.3;
float x=50.234;
double dx=5.7689;
char c=9.6785;
unsigned long ux=4.588;


int main(void)
{
    
    printf("\n i + c = %d", i + c);
    printf("\n x + c = %d", x + c);
    printf("\n dx + x = %d", dx + x); 
    printf("\n ((int)dx) + ix %d", ((int)dx) + ix);
    printf("\n i + x = %d", i + x);
    printf("\n s + j = %d", s + j);
    printf("\n ix + j = %d", ix + j); 
    printf("\n s + c = %d", s + c);
    printf("\n ix + c = %d", ix + c);
    printf("\n ix + ux = %d", ix + ux); 
    return 0;
}