// Create an array of 10 numbers . Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array .


#include <stdio.h>

int main(){
     int arr[10] ; 

     // int *ptr = &arr[0] ; 
     int *ptr = arr ; 
     ptr = ptr+2 ; 

     if (ptr==&arr[2])
     {
        printf("These point to the same location in memory\n") ; 
     }
     else{
        printf("These do not point the same location in memory\n ") ; 
     }
     
     return 0 ; 
 

    return 0 ; 
}

/*  question 2 


If S[3] is a 1-D array of integers then *(S+3) refers to the third element :
a) True 
b) False 
c) Depends 


   */

// In a an array the indexing starts from 0 , so we can easily determine that s+3 referse to 4 element in an array (s=0) ,  s0 , hereby for the third element we use *(s+2) ,...

// So the answers is false