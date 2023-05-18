// write a program to encrypt a string by adding 1 to the ascii value of its characters 

#include <stdio.h>
void encrypt(char *c){

    char *ptr = c ; 
    while(*ptr != '\0'){
        *ptr = *ptr + 1 ; 
        ptr++ ; 
    }

}

int main(){
    char c[] = "get out  from my sight" ; 
    encrypt(c) ; 
    printf("Encrypted string is : %s" , c) ;
    return 0 ; 
}

// 11:22:07 video harry  /
// in above code our message will go as encrypted , so no one can understand it easily
