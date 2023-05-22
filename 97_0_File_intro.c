// FILE Pointer  --> 
// "FILE" is a structure which needs to be created for opening the file . 
// A File pointer is a pointer to this structure of the fie  

// FILE pointer is needed for communication between the file and the program 

// A FILE pointer can be created as follows : 
/*

FILE *ptr  ; 
ptr = fopen("filename.ext" , "mode") ; 

*/

#include <stdio.h>
  
int main(){

    FILE *ptr ; 
    // ptr = fopen("sample.txt" ,"r") ;  //---> for reading the file 
    ptr = fopen("sample.txt" , "w") ; 

    return 0 ;
}

//  "r"  --> open for reading 
//  "rb"  --> open for reading in binary 
//  *** if file does not exist , fopens returns null 


//  "w" --> open for writing 
//  "wb" --> open for writing in binary 
// *** if the file exists , the contents will be be overwritten 


//   "a" --> open for append    --> if the file does  not exist , it will be created



