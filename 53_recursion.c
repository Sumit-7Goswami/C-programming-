/* A function defined in C can call itself .
This is called recursion 
A function calling itself is also called "recursive " function 
  
*/
// lets take an example of recursion

#include <stdio.h>
int factorial(int x) ;

int main(){
    int a = 5 ; 
    printf("The value of factorial %d is %d " , a , factorial(a))  ; 
}

int factorial(int x){
    printf("Calling factorial(%d)\n" , x ) ; 
    if (x==1 || x==0){
        return 1 ; 
    }
    else{
        return x * factorial(x-1) ; 
    }
}