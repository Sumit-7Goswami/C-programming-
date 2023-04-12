#include <stdio.h>
void display(); // Function prototype

int main()
{
    int a; //only here to define some a , but in this code "a" is not there
    printf("Initializing display function\n");
    display(); // function call
    printf("Display function finished its work\n")  ; 
    return 0;
}

// function definition
void display(){
    printf("This is display\n") ; 
}

//*************POINTS TO REMEMBER
// Execution of a C program starts from main()

// a C program can have more than one function

// every function get called directly or indirectly from the main()

// There are two types of function in C . Lets talk aboubt them  
// 1) Library function  --> commonly required function grouped together in a library file  ex..printf

// 2) User defined function  ---> These are the functions declared and defined by the user

