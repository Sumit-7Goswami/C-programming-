// write a program to print the address of a variable . Use this address to get the value of this variable
/*
#include <stdio.h>

int main(){

    int mango = 22  ;
    int *ptr ;
    ptr = &mango ;

    printf("The address of the mango is %u \n" , &mango)  ;
    printf("The value of the mango is %d " , *ptr)  ;


    return 0 ;
}   */

// write a program having a variable i , Print the address of i . Pass this variable to a function and print its address . Are this address same ? why

#include <stdio.h>

int var(int a)
{
    printf("The address of variable a is %u \n", &a);
} 

int main()
{
    int i = 2;

    printf("The value of variable i is %d\n", i);

    var(i) ; 

    printf("the address of i is %u\n", &i);

    return 0;
}
