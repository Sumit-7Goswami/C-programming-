/*

#include <stdio.h>
int main(){

    // char *ptr = "sumit goswami" ; 
    char ptr[] = "sumit goswami" ; 
    printf("%s" , ptr) ; 

    return 0 ; 
}

*/ 

// #include <stdio.h>
// #include <string.h> 

// int main(){

//     char *st = "Goswami" ; 

//     int a = strlen(st) ; 

//     printf("The length of string st is %d", a) ; 

//     return 0 ; 
// }




// #include <stdio.h>
// #include <string.h> 

// int main(){

//     char *str1 = "Bhai-jaan" ; 

//     char str2[42]  ;

//     strcpy(str2 , str1); 

//     printf("Now the string 2 is %s" , str1) ;  

//     return 0 ; 
// }

#include <stdio.h>
#include <string.h> 

int main(){

    char str1[30] = "NONSENSE" ; 
    char *str2 = "Still exists in the world! " ;

    strcat(str1 , str2) ; 

    printf("mow the str1 is %s" ,str1) ; 

    return 0 ; 
}