#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void funct(struct employee emp){
    printf("The code of employee is:  %d \n" , emp.code) ;
    printf("The code of employee is:  %f \n" , emp.salary) ;
    printf("The code of employee is:  %s\n" , emp.name) ;
    emp.code = 8797 ; 
} 


int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101;
    ptr ->code = 101 ; 
    ptr ->salary = 101 ; 
    strcpy(ptr ->name  , "sumit") ; 
    funct(e1); 
    printf("The code of employee is : %d\n" , e1.code) ;
     

    // instead of writing *(ptr) code , we can use arrow to access structure properties as follows ;
    //          (*ptr).code   or  ptr->code
    //  here is known as the arrow operator ;

    return 0;
}