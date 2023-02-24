// write a C program to calculate area of a rectangle :
// a) using inputs supplied by the user

#include <stdio.h>

int main()
{
    int length , breadth;
    printf("Whta is the length of the rectangle\n ");
    scanf( "%d" , &length) ; 

    printf("what is the length of the breadth\n");
    scanf("%d", &breadth);

    printf("The area of your rectange is %d", length * breadth);

    return 0;
}