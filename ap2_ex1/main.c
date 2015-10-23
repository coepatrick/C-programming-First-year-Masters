/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 14. syyskuuta 2011, 15:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
int i, j=25;   /* i is an interger, j is an interger with 25 as the value*/
int *pi, *pj=&j; /* *pi is a pointer with no reference. *pj refers to j */

*pj=j+5;  /* the pointer is updating the value of j to j+5 */
i= *pj+5; /* interget i is updated with the value of j + 5 */
pi=pj; /* pi has the value of pj, which refers to j. pi now refers to j */
*pi=i+j; /* pi updates the value of j to i+j */


printf("i %i j %i *pi %i *pj %i\n", i, j, *pi, *pj);


    return (EXIT_SUCCESS);
}

