// write a program to read and display n numbers using an array . 

#include <stdio.h>

int main(){
    int i=0 , n , arr[20] ;

    printf("enter the number of elements : ") ; 
    scanf("%d" , &n) ; 

    for(i=0 ; i<n ; i++){
        printf("\nArr[%d] = " , i) ; 
        scanf("%d", &arr[i]) ; 
    } 

    printf("The array elements are : ") ; 

    for (i = 0; i<n; i++)
    {
         printf("Arr[%d] = %d\t" ,i , arr[i] ) ; 
    }
  
    return 0 ; 
}