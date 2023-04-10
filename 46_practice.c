// write a program to check whether a given number is prime or not using loops

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d", &num) ;

    if(num % 2 == 0)  
    {
        printf("This number %d is prime number", num);
    }
    else
    {
        printf("the input number is not prime ");
    }

     return 0 ; }

// 
