//  we can increment in address or in memory bytes using pointers also

#include <stdio.h>

int main(){

    int i = 34 ; 
    int *ptr = &i ; 

    printf("The value of ptr is %u\n" ,ptr ) ; 
    ptr++ ; 
    printf("The value of ptr is %u\n" ,ptr ) ;  
    // so in integer case it increse by 4 bytes 
 
    char c=34 ; 
    char *pointer = &c ; 
    printf("The value of ptr is %u\n" ,pointer) ; 
    pointer++ ; 
    printf("The value of ptr is %u\n" ,pointer ) ; 
    // in character , the bytes in memory increses by 1 

    float Float=34 ; 
    float *point = &Float ; 
    printf("The value of ptr is %u\n" ,point) ; 
    point++ ; 
    printf("The value of ptr is %u\n" ,point ) ; 
    // in character , the bytes in memory increses by 4





    return 0 ;
}