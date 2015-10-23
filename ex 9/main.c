/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 13. syyskuuta 2011, 14:17
 * 
 * excersice 9 week 1
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

typedef struct fraction {
    int nom;
    int den;
}fraction;

/*
 * 
 */
fraction fr_add(fraction first,fraction second) {
    /*int nom1, nom2, nom3, den1, den2, den3; /* input 1,2 output 3 */
    
    fraction result;
    
    first.nom*=second.den;    /* multiplying denominators to make fractions equal*/
    second.nom*=first.den;
    first.den*=second.den;
    second.den=first.den;
    
    result.nom = first.nom + second.nom;
    result.den = first.den;
    
    int divideby = (GCD(result.nom, result.den));
    result.nom /= divideby;
    result.den /= divideby;
    
    return result;
    
        
}

fraction fr_sub(fraction first,fraction second) {
    /*int nom1, nom2, nom3, den1, den2, den3; /* input 1,2 output 3 */
    
    fraction result;
    
    first.nom*=second.den;    /* multiplying denominators to make fractions equal*/
    second.nom*=first.den;
    first.den*=second.den;
    second.den=first.den;
    
    result.nom = first.nom - second.nom;
    result.den = first.den;
    
    int divideby = (GCD(result.nom, result.den));
    result.nom /= divideby;
    result.den /= divideby;
    
    return result;
    
        
}

fraction fr_mul(fraction first,fraction second) {
    /*int nom1, nom2, nom3, den1, den2, den3; /* input 1,2 output 3 */
    
    fraction result;
    
    result.nom = first.nom * second.nom;
    result.den = first.den * second.den;
    
    int divideby = (GCD(result.nom, result.den));
    result.nom /= divideby;
    result.den /= divideby;
    
    return result;
    
        
}

fraction fr_div(fraction first,fraction second) {
    /*int nom1, nom2, nom3, den1, den2, den3; /* input 1,2 output 3 */
    
    fraction result;
    
    result.nom = first.nom * second.den;
    result.den = first.den * second.nom;
    
    int divideby = (GCD(result.nom, result.den));
    result.nom /= divideby;
    result.den /= divideby;
    
    return result;
    
        
}

int main(int argc, char** argv) {
/*
    struct fr-add testadd;
    testadd.nom1 = 1;
    testadd.nom2 = 2;
    testadd.den1 = 1;
    testadd.den2 = 4;
    
*/
    struct fraction first = {3, 4};
    struct fraction second = {1, 5};
    struct fraction result = fr_add(first, second);
    
    printf("add %i / %i\n", result.nom, result.den);
    
    result = fr_sub(first, second);
    
    printf("sub %i / %i\n", result.nom, result.den);
    
    result = fr_mul(first, second);
    
    printf("mul %i / %i\n", result.nom, result.den);
    
    result = fr_div(first, second);
    
    printf("div %i / %i\n", result.nom, result.den);

    return (EXIT_SUCCESS);
}

