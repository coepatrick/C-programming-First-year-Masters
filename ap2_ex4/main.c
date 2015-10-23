/* 
 * File:   main.c
 * Author: coe
 *
 * Created on 14. syyskuuta 2011, 16:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle_ints (int* nums, int len)
{
    int random; // stores random value
    int i,l;   // used as counters
    int array[len];  //used to store used values
    int temp[len];  //stores shuffled values
    
    for(i=0; i < len; i++){    /*fill array with -1 */
        array[i]=-1;
    }
    
    for(l=0; l < len; l++){
        
            random=time(NULL)*rand()%len;  
            
            for(i=0; i < len; i++)
             {                         
               while(array[i] == random)
               {
                i=0;       //resets counter if match is found, a recheck mush be done.
                random=time(NULL)*rand()%len; 
               }
            }
        
   // printf("%d, ", nums[random]);
    array[l]=random;
    temp[l] = nums[random];
    }
    
    for(i=0; i < len; i++){    // transfer temp to nums, which points to original array
        nums[i]=temp[i];
    }
    
    
}

/*
 * 
 */
int main(int argc, char** argv) {
    int i, nums[] = { 0, 1, 2, 3, 4, 5, 6 };
    shuffle_ints(nums, 7);
    
   for(i=0; i < 7; i++){    
        printf("%d, ", nums[i]);
   }

    return (EXIT_SUCCESS);
}

