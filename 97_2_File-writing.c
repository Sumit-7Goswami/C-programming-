#include <stdio.h>
int main(){

    FILE *fptr ; 
    int num = 45 ; 

    fptr = fopen("sample1.txt" , "w"); 
    fprintf(fptr , "The number is %d\n" , num) ; 
    fprintf(fptr , "The number is %d\n" , num) ; 
    fprintf(fptr , "TThanks for using fprintf") ; 
    fclose(fptr)  ;

    return 0 ;
}