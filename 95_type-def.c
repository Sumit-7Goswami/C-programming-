#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[30];
}emp ;    // now we can replace struct employee with  emp


void funct(emp emp1){
    printf("The code of employee is:  %d \n" , emp1.code) ;
    printf("The code of employee is:  %f \n" , emp1.salary) ;
    printf("The code of employee is:  %s\n" , emp1.name) ;
 
} 

int main()
{
    // declaring ptr and e1 ;
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1;

// set the member values for e1 
    // (*ptr).code = 101 ;

    ptr->code = 101;
    ptr->salary = 10.1;
    strcpy(ptr->name, "goswami");

    funct(e1) ; 

    return 0;
}