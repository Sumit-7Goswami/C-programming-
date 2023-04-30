// an array is a collection of similiar elements  //stored similar types of data

// one variable = capable of storing multiple values
/*   int marks[] ;   ===>  integer array
     char name[] ;   ====>  character array or string
     float percentile[] ; ===> float array


*/

/*  Accessing elements
  elements of an array can be accessed using

  scanf("%d" , &marks[0]) ;  ---> Input first value
  printf("%d" , marks[0]) ; ----> output first value of the array


  */

#include <stdio.h>

int main()
{

    int marks[4]; // allocate space for 4 integers

    printf("enter the value of marks for student 1 :  ");
    scanf("%d", &marks[0]);

    printf("enter the value of marks for student 2 :  ");
    scanf("%d", &marks[1]);

    printf("enter the value of marks for student 3 :  ");
    scanf("%d", &marks[2]);

    printf("enter the value of marks for student 4 :  ");
    scanf("%d", &marks[3]);

    printf(" The numbers you entered are %d %d %d  and %d", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}


/*
  arrays in memory 
  ----------consider this array 

  int array[3] = {1 ,2 ,3} ----> 1 integer = 4 bytes

  This will reserve 4x3 = 12 bytes in memory 4 bytes for each other 

  let 1 have 62302 memory then , obviously 2 have 62306 and then 3 have 62310  and respectively by increasing 4 bytes in each memory 


  we can increment in address or in memory bytes using pointers also


 */