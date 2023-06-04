
/*
gets() is a function which can be used to receive a multi-word string

example --
                char st[30] ;
                gets(st) ;      ===> The entered string is stored in St .

Multiple gets() calls will be needed for multiple strings

Likewise , puts() can be used to output a string .

puts(st) ;    ---> prints the string places the cursor on the next line


*/

// #include <stdio.h>
// int main(){

//     char s[34] ;
//     printf("enter the your name") ;
//     scanf("%s" , &s) ;
//     printf("your name is %s" , s) ;

//     return 0 ;
// }      
// in above code , when we write the name and surname , then our output gets as a name only , and surname will be missed .
// so we use gets() to get multi-word string


#include <stdio.h>
int main()
{

    char s[34];
    printf("enter your name");
    gets(s);
    // puts(s) ; 
    printf("your name is %s", s);
    return 0;   
}