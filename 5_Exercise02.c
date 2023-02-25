// Write the area of the circle and modify the same program to calculate the volume of a cylinder given its radius and height 

#include <stdio.h>

int main()
{
    int radius = 3  ; 
    float pi = 3.14 ;
    printf("The area of this circle is %f \n", pi*radius*radius) ;

    int height = 3 ;
    printf("Volume of this cylinder is %d" , pi * radius * height) ;

    return 0  ;

}