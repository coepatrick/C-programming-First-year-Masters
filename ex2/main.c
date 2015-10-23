#include <stdio.h>
/* Patrick Coe - Fall 2011 - First week exersice, 2.

2. Write a program which prints the values of three variables. The types of the
variables are char, int, and float. Test with different values. */

char defaultchar='b';
int defaultint=5;
float defaultfloat=7.2;

int main(void)
{
printf("Char=%c int=%d float=%f", defaultchar, defaultint, defaultfloat);
return 0;
}