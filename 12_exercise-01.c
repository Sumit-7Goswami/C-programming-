//  which of the following is invalid in C ?
// i) int  a  ; b = a ;
// ii) int v = 3 ^ 3 
// iii) char dt = '21 dec 2020' ; 


#include<stdio.h>

int main()
{
    int a ; int b = a ;
    int v = 3^3 ; 
    printf("%d" , v) ; 
    return 0 ;
}