#include<stdio.h>

int main(){
    int a  ; 
    scanf("%d" , &a) ;

    while (a<10)
    {
        printf("%d\n" , a) ;
        a++ ;
    }
     

    return 0 ;
}

/*IF he condition never becomes false , the while loop keeps getting executed .Such a loop is known as an infinite loop */


 