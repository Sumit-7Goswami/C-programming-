
// ⭐⭐⭐ searching the array elements 
/* 
searching means to find whether a particular value is present in the array or not .  If the value is present in the array , then searching is said to be successful  , otherwise not successful !. 

There are two method for searching the array elements 
--->  Linear searching   --> binary searching(or sequence searching) 
 
for example if the elements of the array are arranged in ascending order , then binary seaRCh should be used as it more efficient for sorted list in terms of compleexity . 

Linear search ... it is used for particular value . Linear search is mostly used to search an unordered list of elements 
*/


//💪💪💪💪💪💪💪💪💪 write a program to implement linear search

#include<stdio.h>
int main(){

    int arr[10] , num , i , n , found=0  , pos=-1 ; 

    printf("enter the numbers of elements in the array : ") ; 
    scanf("%d" , &n) ; 

    printf("enetr the elements - : ") ;  
    for(i=0 ; i<n ; i++) {
        scanf("%d" , &arr[i]) ;
    }

    printf("enter the numbr that as to be searched : ") ; 
    scanf("%d" , &num) ; 

    for(i=0 ; i<n ; i++){
        if(arr[i] == num){
            found = 1 ; 
            pos = i ; 
            printf("%d is found in the array at position = %d" , num , i );
            break;

        }
        
    }
    if(found ==0 ){
        printf("%d Does not exist in the array" , num) ; 
    }
    
    return 0 ;
}