/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 13. syyskuuta 2011, 13:56
 * 
 * exercise 8 week 1
 */

#include <stdio.h>
#include <stdlib.h>


void swap_ints(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int GCD(int a, int b)
{ 
    int r;
    if (a < b){
        swap_ints(&a ,&b );
    }
    r = a%b;
    if (r == 0)
    {
        return b;
    }
        
    a = b;
    b = r;
    
    return GCD(a,b);
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a, b;
    
    printf("please enter a number: " );
    scanf("%i", &a);
    printf("please enter a second number: ");
    scanf("%i", &b);
    
    int result = GCD(a,b);
    
    
    printf("the gratest common divisor is: %i", result);

    return (EXIT_SUCCESS);
}

