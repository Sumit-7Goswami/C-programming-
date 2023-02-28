#include <stdio.h>
# include <math.h> // in power operator we use this library or for many more operators
int main()
{
    int a = 4 ; 
    int b = 8 ;
    // int z = b*a ; //correct method

    int z ; z = b*a  ; //this is coorect method 

    // int z ; b*a = z ....this method is wrong we can not write like tis 

    printf("The value of a + b is : %d \n" , a+b) ;
    printf("The value of a - b is : %d \n" , a-b) ;
    printf("The value of a * b is : %d \n" , a * b) ;
    printf("The value of a / b is : %d \n" , a/b) ;

    printf("%d \n" , z);

    printf(" 5 when divided by 2 leaves a remainder of %d \n" , 5 % 2) ; 
    printf(" -5 when divided by 2 leaves a remainder of %d \n" , -5 % 2) ; 
    printf(" 5 when divided by -2 leaves a remainder of %d \n" , 5 % -2) ; 

    /*numerator sign will be taken in modulud*/

    printf("The value of 4 to the power 5 is %f\n" , pow(4,5)) ; //for that we include library #include math.

    printf("The value of 6 + 5 is %d \n" , 6 + 5) ; 
    printf("The value of 6 + 5.6 is %f \n" , 6 + 5.6) ;
    printf("The value of 6.1 + 5.6 is %f \n" , 6.1 + 5.6) ; 

    printf("The value of 5/2 is %d\n" , 5/2) ;
     
    printf("The value of 5/2 is %f\n" , 5/2) ;



    
    return 0 ;
}