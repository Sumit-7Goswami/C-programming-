// write a program to print multiplication table of a given number n .

#include <stdio.h>

int main()
{
    int n , i;
    printf("enter the number\n");
    scanf("%d", &n);

    printf("Multiplication table of %d: \n" , n) ; 

    for ( i = 0; i <= 10 ; i++)
    {
        printf("%d x %d = %d\n" , n , i , n*i); 
    }
    


    return 0;
}