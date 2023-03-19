// op - The following tables list the operator priority in c  
/*Priority          Operator
 1 st               *  /  %
 2 nd               +    -
 3rd                 = 
*/

/*
operator associativity
when operators of equal priority are present in an expression  ,  the tie is taken care of by associativity

x * y / z  ====> (x*y)/z     

x / y * z  =====> (x/y)*z

**       * , / follows left to right associativity

*/


#include <stdio.h>

int main()
{
    int x = 2 ;
    int y = 3 ;

    printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y) ;
    printf("The value of 8*y / 3*x is %d \n", 8 * y /3 * x) ;
    // 8*3 /3*x = 24/6 will give wrong answer 

    //associate methd 24/3*2  ==>8*2 ===> 16 
    return 0 ; 
}
