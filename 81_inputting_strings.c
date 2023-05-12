#include <stdio.h>

int main(){

    char s[34] ; 
    printf("enter your name : ") ; 
    scanf("%s" , &s) ; 
    printf("your name is %s " , s) ; 
    return 0 ; 
     

     return 0 ; 
}

/* 
scanf automatically adds the null characters when the enter key is pressed

note: 
1) The string should be short enough to fit into the array 

2) scanf cannot be used to input multi-word strings with spaces 

*/