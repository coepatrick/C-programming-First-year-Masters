#include <stdio.h>
/* Patrick Coe - Fall 2011 - First week exersice, 4.

4. Write a program that reads a forename, surname and year of birth. Use the
scanf function. Then the program prints the names and the year one after
another sequentally */

int birthyear;
char forename[20],surname[20];


int main(void)
{
    printf("Please enter your forename: ");
    scanf("%19s", forename);
    
    printf("Please enter your surname: ");
    scanf("%19s", surname);
    
    printf("Please enter your birth year: ");
    scanf("%i", &birthyear);
    
    printf("%s, %s %i", surname, forename, birthyear);
    return 0;
}