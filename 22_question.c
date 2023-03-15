// write a program to find grade of a student given his marks based on below : 
// --> 90 - 100   =  A 
//     80 - 90    =  B 
//     70 - 80    =  C
//     60 - 70    =  D
//     < 70    = F 

#include <stdio.h>
int main()
{
    int marks ; 
    printf("enter your marks \n") ;
    scanf("%d" , &marks) ; 

    if(marks>= 90){
        printf("grade A") ;
    }

    else if (80 <= marks <= 90)
    {
    printf("grade B") ; 
    } 

    else if(70 <= marks <= 80 ) {
        printf("grade C") ; 
    }

    else if( 60 <= marks <= 70  )
    {
        printf("Grade D") ; 
    }

    else if ( marks < 70) {
        printf("Grade F") ;
    }
  
    return 0 ; 
}


