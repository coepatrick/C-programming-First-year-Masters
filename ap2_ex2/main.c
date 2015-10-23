/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 14. syyskuuta 2011, 16:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void print_doubles(double* array, int len)
{
    int i=0;
    for(i=0; i < len;i++){
    printf("%f, ", array[i]);
    }
    
}


int main(int argc, char** argv) {
    
    double nums[5] = { 4.14159, 2.71828, 1.41421, 1.61803, 4.66920 };
    print_doubles(nums, 5);

    return (EXIT_SUCCESS);
}

