// we use break statement in for , while , and do while

#include <stdio.h>

int main()
{
    int i = 0;
    do 
    {
        printf("The value for i is %d\n", i);
        if (i == 7)
        {
            break;
        }
        i++ ;
    } while (i < 20);

    return 0;
}