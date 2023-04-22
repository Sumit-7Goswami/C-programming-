// ////// // POINTERS  ////// //// /// 

// a pointer is a variable which stores the address of another variable 


//   The " address of " (&) operators 
// the address of operaor is used to obtain the  address of a given variable 


//**// format specfier for printing pointer address  is "%u"

/*  
The value of address operator (*)
The value of address or  * operator is used to obtain the value present at a given memory address . It is denoted by *  


*/


//===>> how we get the values from another variable using pointers 
// int main(){
//     int a = 4 ; 

//     int *b = &a ; 

//     printf("the value of b is %d" ,*b ) ;   





// how to declare a pointer ? 
// a pointer is declared using the following syntax 

/*    int *j ;   ===> declare a variable j of type int pointer 
      j = &i     ====> store address of i in j   */



// just like pointer of type integer , we also have pointers to char , float , etc  

// int *ch_ptr ;   //---> pointers to integer 
// char *ch_ptr ;  //----> pointers to character 
// float *ch_ptr ; //---> pointers to float 


// a program to demonstrate pointers
#include <stdio.h>

int main(){
    
    int i = 34 ;
    int *j = &i ; // j will now store the address of i 
    printf("The value of i is %d\n" , i) ; 
    printf("The value of i is %d\n" , *j) ;
    printf("The address of i is %u\n" , &i) ; 
    printf("The address of i is %u\n" , j) ; 
    printf("The address of j is %u\n" , &j) ; 
    printf("The value of j is %u\n" , *(&j)) ; 


    return 0 ; 

}
