#include <stdio.h>
/* Patrick Coe - Fall 2011 - First week exersice, 3.

3. Write a program which prints different decimal numbers. Change the precision
of the outputs. Also, use output felds of different sizes */

float prechange1=10.234, prechange2=19.876, prechange3=20.43; /*declaring variables, initializing to a preset number*/

int main(void)
{
    printf("no modification = %f %f %f \n", prechange1, prechange2, prechange3); /*output without modification*/
    printf("precision [2] width [10] = %10.2f %10.2f %10.2f \n", prechange1, prechange2, prechange3);
    printf("precision [1] width [8] = %8.1f %8.1f %8.1f \n", prechange1, prechange2, prechange3);
    return 0;
}