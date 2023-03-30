// write a program to print first n natural numbers using for loop

#include <stdio.h>

int main()
{
    int n ;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (int a = 1 ; a<n ; a++)
    {
        printf("%d\n" ,a) ;
    }
    return 0 ;
}




// a case of decrement

#include <stdio.h>
int main()
{
    int i;
    for (i = 5; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
