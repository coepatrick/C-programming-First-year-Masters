/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 13. syyskuuta 2011, 13:46
 * Assignment 7 exercise 1
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int i,t; /* i is interger, t is placeholder */

int main(int argc, char** argv) {

    
    printf("enter any number (negative or positive): ");
    scanf("%i", &i);
    
    if(i<0)
    {
        t=i;
        i=t-t-t;
    }
    
    printf("absolute value is: %i", i);
      
   
    return (EXIT_SUCCESS);
}

