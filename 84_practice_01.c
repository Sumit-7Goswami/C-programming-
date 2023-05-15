// which of the following is used to appropriately read a multi-word string 
/*

a)  gets()
b)  puts()
c)  printf() 
d) scanf()

*/   // in option puts and printf are not the answer , and in gets() and scanf() , they both might be the answer but in given question appropriately is there , so gets() have a proper read than scanf . 


// write a program to take string as an input from the user using %c and %s . Confirm that the string are equal . 

#include <stdio.h>
#include <string.h>

int main(){

    char str1[30] ; 
    gets(str1) ; 

    char str2[20] ; 
    gets(str2) ; 

    printf("%d" , strcmp(str1 , str2) ); 


    return  0 ; 

}