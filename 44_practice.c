// write a program to calculate the factorial of a given numbers using a for loop .

#include <stdio.h>

int main()
{
    int i=0 , n=7 ,  factorial = 1 ;
    for(i=1 ; i<=n ; i++){
        factorial *= i ;
    }
    printf("The value of factoial is %d is %d" , n ,factorial) ;
    return 0 ; 
}

// factorial (4) = 4x3x2x1