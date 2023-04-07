// write a program to calculate the sum of the numbers occuring in the multiplication table of 8 . (consider 8x1 to 8x10)


#include <stdio.h>

int main(){

    int n , i , sum = 0;
    printf("enter the number\n");
    scanf("%d", &n); 

    for ( i = 1 ; i <= 10 ; i++)
    {
        sum += n*i ;
         
    }
    printf("Sum of the numbers in the %d table: %d\n" ,n,  sum) ;
    return 0 ;
}
