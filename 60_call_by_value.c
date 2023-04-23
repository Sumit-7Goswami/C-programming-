// call by value --> sending the value of arguments



#include <stdio.h>

int sum(int a , int b) ; 

int main(){
    int a=4 , b=7 ; 

    printf("The value of a and b is %d and %d\n " , a ,b) ;
    printf("The value of a+b is %d\n" , sum(a,b)) ; 
    printf("The value of a and b after function call is %d and %d\n " , a , b) ;

}
int sum(int a , int b){
    int c ;
    c = a + b ; 
    a = 33 ; 
    b = 33 ;  
    return a+b ; 
}

// in  C  we usually make a call by value 



 
