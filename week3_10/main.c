/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 20. syyskuuta 2011, 13:58
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * 
 */

/*
/*void DynArray::expandarray()
{
void *p = malloc(size);
/* and later... 
void *tmp = realloc(p, big_size);
if (tmp != NULL) {
   p = tmp; /* OK, assign new, larger storage to p 
} else {
   /* handle the problem somehow 
}
}
*/




/*
struct DynArray
{
    public:
       DynArray();
       void expandarray(int array, int size);
    private:
       int size,newsize;
   // int array,oldarray,newarray;
};
*/

typedef struct DynArray /*::expandarray*/
{
    int size;
    int* array;
    int used;
   // int tmp[size];
    //*array = realloc(size);
/*
    tmp = realloc(array, newsize);
    if (tmp != NULL)
             array = tmp;  
*/
} DynArray;

/*
DynArray* DynArray_create(void)
{
    if (used !< size)  
       array = realloc(size);
}
*/

DynArray* DynArray_create(void)
{
    int size = 2; //expand array by this size
    DynArray* e = malloc(sizeof(DynArray));
   
    if (e == NULL)
        return NULL;
    e->used = 0;
    e->array = malloc(sizeof(int) * size);
    if (e->array == NULL)
    {
        free(e);
        return NULL;
    }
    e->size += size;
    return e;
}

void DynArray_destroy(DynArray* e)
{
    if (e == NULL)
        return;
    free(e->array);
    free(e);
    return;
}



//bool DynArray_append(DynArray* arr, int number)



bool DynArray_append(DynArray* e, int number) {
    
    int size = 2;
    

    if (e->used == e->size) {    //if array full
/*
       if (malloc(sizeof (int) * size)) == NULL) 
            return false;
*/
        int *temp = realloc(e->array,(sizeof (int) * size) * e->size);
        if (temp==NULL)
            return false;
    
        e->array = temp;
        e->size *= size;
       
    }

    

    e->array[e->used] = number;
    e->used++;

    return true;
}


int DynArray_get(DynArray* arr, int index)
{
    index--;
    if( (index >= arr->size) || (index < 0))
        return -1;
    return arr->array[index];
        
}



int main(void) {
   
    DynArray* test;
    test = DynArray_create();
    DynArray_append(test, 5);
    DynArray_append(test, 7);
    DynArray_append(test, 8);

    printf("%d ", DynArray_get(test, 3));
    printf("%d", DynArray_get(test, 2));
    printf("%d", DynArray_get(test, 1));
     printf("%d", DynArray_get(test, 5));
            
            
   DynArray_destroy(test);
    
   // DynArray (array,7); //DynArray.expandarray(array, 7);

    return (EXIT_SUCCESS);
}

