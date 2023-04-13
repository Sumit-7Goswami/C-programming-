// write a program with three function 
/*
1> Good morning function which prints "Good Morning"
2> Good afternoon fucntion which prints "Good Afternoon"
3> Good night function which prints "Good night"*/

// #include <stdio.h>
// void goodMorning() ; 
// void goodAfternoon() ; 
// void goodNight();


// int main(){
//     goodMorning();
//     goodAfternoon();
//     goodNight();

//     return 0 ;
// }

// void goodMorning(){
//     printf("Good Morning Sumit Goswami\n") ; 
// }

// void goodAfternoon(){
//     printf("Good afternoon Sumit Goswami\n") ; 
// }

// void goodNight(){
//     printf("GoodNight Sumit Goswami\n") ; 
// }





//***************************************************
//every function get called directly or indirectly from the main() ,, see below code to understand

#include <stdio.h>
void goodMorning() ; 
void goodAfternoon() ; 
void goodNight();


int main(){
    goodMorning();
    
    return 0 ;
}

void goodMorning(){
    printf("Good Morning Sumit Goswami\n") ; 
    goodAfternoon() ;
}

void goodAfternoon(){
    printf("Good afternoon Sumit Goswami\n") ;
    goodNight(); 
}

void goodNight(){
    printf("GoodNight Sumit Goswami\n") ; 
}
