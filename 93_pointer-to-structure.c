#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    (*ptr).code = 101;
    ptr ->code = 101 ; 
    printf("%d", e1.code);

    // instead of writing *(ptr) code , we can use arrow to access structure properties as follows ;
    //          (*ptr).code   or  ptr->code
    //  here is known as the arrow operator ;

    return 0;
}