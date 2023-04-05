// write a program to sum first ten natural numbers using while loop . 



/*******try this question using while , for and do-while loops also *******/


//using for loop 
#include <stdio.h>

int main()
{
    int i , sum = 0 , n = 10 ;

    for(i=0 ; i<=n ; i++){
        sum +=i ;
    }
    printf("The value of sum (1 to 10) is %d" ,  sum ) ;
    return 0 ;
}

//you can take n as input also ,, as scanf()

#include <stdio.h>

int main(){

    int i  , num , sum=0 ;
    printf("Enter the number\n") ; 
    scanf("%d" , &num) ; 



    for ( i = 0; i <= num; i++)
    {
        sum = sum + i ;
    }
    printf("The value of sum of number is %d" ,  sum ) ;
    

    return 0 ;
}
