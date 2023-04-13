#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output 

int sum(int a , int b) ;      // function prototype declaration

int main(){
    int c ;      // we defined here c
    c = sum(2 , 15);      // function call
    printf("The value of c is %d\n" , c) ;
    return 0 ; 
}

int sum (int a , int b){
    int c ;
    c = a + b ; 
    return c ; 
}


#include <stdio.h>


// int sum();
// int main(){
//     int c = sum() ; 
//     printf("%d" ,c) ;

// }
// int sum(){

//     int a , b  ;
//     printf("Enter a value\n") ; 
//     scanf("%d  %d"  ,&a ,&b) ; 
//     return a+b ; 

// } 


