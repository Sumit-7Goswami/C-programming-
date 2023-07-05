// write a program to calculate C(n/r) using functions 

#include <stdio.h>
int fact(int) ;     // declaring function 
int main(){

    int n , r  ; 
    float result  ; 

    printf("enter the value of n : \n") ; 
    scanf("%d", &n) ; 

    printf("enter the value of r : \n") ; 
    scanf("%d" , &r) ; 

    result =  (float)fact(n)/(fact(r)*fact(n-r));

    printf("C(n/r)  : C(%d)/(%d) = %.2f" , n , r , result ) ; 

    return 0 ; 
}

int fact(int num){
    int f =1 , i  ; 

    for(i=num ; i>=1 ; i--){

        f = f*i ; 
    }
    return f ;
}