// calculate income tax paid by an employee to the government as per the slabs mentioned below : 
/*  
    Income slab                 Tax 
    2.5L - 5L                 5% 
    5.0 - 10.0 l               20% 
    above 10.0 L               30 % 
    
*/
// note that there is no tax below 2.5L . Take income amount as an input from the users 


#include <stdio.h>

int main()
{
    float tax = 0 , income ; 
    printf("Enter your Income\n") ; 
    scanf("%f" , &income) ; 

    if (income>=250000 && income<=500000){
        tax =  tax + 0.05 * (income - 250000) ; 
    }

    if (income >= 500000 && income <= 1000000)
    {
        tax += 0.20 * (income - 500000) ; 
    }

    if  (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000) ; 
    }

    printf("Your net income tax to be paid by 26 th of this month is %f\n" , tax) ; 


    return 0 ; 

}