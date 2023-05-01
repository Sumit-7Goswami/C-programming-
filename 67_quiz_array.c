#include <stdio.h>

int main()
{
    int marks[5];

    for (int i=0 ; i<5 ; i++)
    {
        printf("enter the marks for student %d ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i=0 ; i<5 ; i++)
    {
        printf("The value of marks for student %d is : %d  \n", i + 1 , marks[i]);
        
    }

    return 0 ;

    
}

/*   Initialization of an Array   
------->  There are many other ways in which an array can be initialized 

** arrays can be initialized while declartion*****

int cgpa[3] = {9 ,8 , 8} 
float marks[] = {6.6 , 66.6 , 5.4  


}*/

