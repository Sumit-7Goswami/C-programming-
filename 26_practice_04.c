// Write a program to find whether a year entered by the user is a leap year or not . Take year as input from the user .

#include <stdio.h> 

int main(){
    int year  ; 
    printf("Enter the  year\n") ; 
    scanf("%d" , &year) ;

    if (year % 4 == 0)
    {
        printf("Yes this is a leap  year \n") ;  
    }
    else
    {
        printf("No , your entered year is not leap year") ;
    }
    
    return 0 ;
}
