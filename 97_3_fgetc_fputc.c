// fgetc() ------->  character by character apki file koo read krne mm help krta hh 

/*
#include <stdio.h>

int main(){
    FILE *ptr ; 
    // fgets demo for reading a file 
 
    ptr = fopen("getcdemo.txt"  , "r") ;
    printf("The value of my character is %c\n" , fgetc(ptr)) ; 
    printf("The value of my character is %c\n" , fgetc(ptr)) ; 
    printf("The value of my character is %c\n" , fgetc(ptr)) ; 

    return 0 ; 

}
*/


// fputc() -- > file mm character write krne kk liye
#include <stdio.h>

int main(){
    FILE *ptr ; 
    // fgets demo for reading a file 
 
    ptr = fopen("putcdemo.txt"  , "w") ;
    putc('s' , ptr) ;
    putc('u' , ptr) ;
    putc('m' , ptr) ;
    putc('i' , ptr) ;
    putc('t' , ptr) ; 
    fclose(ptr) ; 

    return 0 ; 

}
