#include <stdio.h>
/* Patrick Coe - Fall 2011 - First week exersice, 5.

 5. As the previous program, but now the program reads several names one after
another. Design how to inform the program that there are no more names */

int birthyear[100], i;
char forename[100][100],surname[100][100], c;


int main(void)
{
    
    do
    {
      i++;
     
              
      printf("Please enter your forename: ");
      scanf("%99s", forename[i]);
    
      printf("Please enter your surname: ");
      scanf("%99s", surname[i]);
    
      printf("Please enter your birth year: ");
      scanf("%i", &birthyear[i]);
      
      printf("continue? (Y/N) :");
      c = getchar(); /*to capture new line */
      c = getchar();
    
      
      } while (c != ('N') && i<100);

while (i > 0)
{
    printf("%s, %s %i \n", surname[i], forename[i], birthyear[i]);
    i--;
}
    return 0;
}