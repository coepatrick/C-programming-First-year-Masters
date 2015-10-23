/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 13. syyskuuta 2011, 15:10
 */

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[])
{
int i;

for (i = 0; i <= argc; ++i)
{
printf("%s\n", argv[i]);
}
exit(EXIT_SUCCESS);
}
