// additional of two 1-dimensional array and stored in a new array

// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("entr the size of the array: ");
//     scanf("%d", &n);

//     int a[n], b[n], c[n], i;
//     printf("enter the values for array A: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("enter the values for array B: ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &b[i]);
//     }

//     for (i = 0; i < n; i++)
//     {
//         c[i] = a[i] + b[i];
// //     }

// //     printf("\n");
// //     for (i = 0; i < n; i++)
// //     {
// //         printf("%d", c[i]);
// //     }
// // }




// // write a c program to print the transpose of a 2d matrix

// #include <stdio.h>
// int main(){

//     int n  , m ; 
//     printf("enter the number of rows : ") ; 
//     scanf("%d" , &n) ; 

//     printf("enter the number of column : ") ; 
//     scanf("%d" , &m) ;

//     int  a[n][m]  ,i , j  ; 
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = 0; j < m; j++)
//         {
//             printf("a[%d][%d] : " , i,j);
//             scanf("%d" , &a[i][j]) ; 
//         }
        
//     }
//     for ( i = 0; i < n; i++)
//     {
//         for (  j = 0; j < n; j++)
//         {
//             printf("%d" , a[j][i])
//         }
//         printf("\n") ; 
        
//     }
    
     

//     return 0  ;
// }


// #include <stdio.h>

// void main(){

//     int a[10] = {2 , 6 ,8,10 , 12,89 ,68,45, 37} ; 
//     int i  , loc = -1 , key ; 
//     printf("enter integer value to search in array :  \n") ; 
//     scanf("%d" , &key) ; 
//     for (i = 0; i < 10; i++)
//     {
//         if (a[i] == key) 
//         {
//             loc = i+1 ; 
//             break;
//         }  /// end if
        
//     } // end for 

//     if(loc!= -1){
//         printf("elemnet found at %d " , loc) ; 

//     }
//     else
//     {
//         printf("element not found ")  ; //
//     }
    
// }  // end main




// #include <stdio.h>
// int main(){
//     int loc = -1 , key , beg=0 , last=9 , mid ; 
//     int a[10] = {2 ,4 ,6 , 8 , 10 , 12 , 37 , 45 , 68 , 89} ; //stored array 
//     printf("enter integer value to search in stored array : " ) ;
//     scanf("%d" , &key)  ; 

//     while ( beg<=last)
//     {
//         mid = (beg + last) / 2 ; //determine middle element 
//         if ( a[mid] == key)
//         {
//             loc = mid ; //save the location of element 
//             break ;  

//         }
//         else if (a[mid]>key) // key less than middle element
//         {
//             last = mid-1 ; 
//         }
//         else if(a[mid]<key)  // key greater then middle element
//         {
//             beg = mid+1 ; 

//         }   // end of if else
//     } // end of while
    
//     if (loc!=-1)
//     {
//         printf("element found at %d" ,loc+1) ; 
//     }
//     else
//     {
//          printf("%d" , loc) ; 
//     }
    
    
    
// }

 


// #include <stdio.h>
//  struct number
//  {
//     int x ; 
//     float y ; 
//  };

// int main(){

//     struct number n1 ; 
//     n1.x = 24 ; 
//     n1.y = 24.7855 ; 
//     printf("%d   %f" , n1.x , n1.y) ; 
// } 

// --- > instead of above line , we can also write like this 
// struct number n1 = {23 , 23.342}  ; 
// printf("%d  %f" , n1.x , n1.y) ; 



// #include <stdio.h>
//  struct number
//  {
//     int x ; 
//     float y ; 
//  }n1 , n2  ;

// int main(){

//     struct number n1 , n2 ; 
//     n1.x = 24 ; 
//     n1.y = 24.7855 ;
//     n2.x = 343 ; 
//     n2.y = 65.54 ;  
//     printf("%d   %f\n" , n1.x , n1.y) ; 
//     printf("%d   %f" , n2.x , n2.y) ; 
// } 




// #include <stdio.h> 

// struct car
// {
//     char *name ;  
//     int year ; 
//     float price ; 

// };
// int main(){
//     struct car c1={"abc" , 2016  ,  433.3}  ; 

//     printf("%s  %d  %f" , c1.name , c1.year , c1.price) ;  
// }



// #include <stdio.h> 

// struct car
// {
//     char name[20] ;  
//     int year ; 
//     float price ; 

// };
// int main(){

//     struct car c1 ; 
//     printf("enter the values for name , year "); 
//     gets(c1.name) ; 
//     scanf("%d" , &c1.year) ; 
//     scanf("%f" , &c1.price) ; 
     
//     printf("%s  %d  %f" , c1.name , c1.year , c1.price) ;  
// }



// create a structure student which contains name , rollno. and marks of three subject ;
// #include <stdio.h>

// struct student
// {
//     char name[20]  ; 
//     int roll ; 
//     float marks1 , marks2 , marks3 ; 
// };

// int main(){

//     struct student s1; 
//     printf("enter the student name , roll no and marks for 3 sub") ; 
//     gets(s1.name) ;
//     scanf("%d" , &s1.roll) ; 
//     scanf("%f" , &s1.marks1) ; 
//     scanf("%f" , &s1.marks2) ; 
//     scanf("%f" , &s1.marks3) ; 

//     printf("%s %d %f %f %f" , s1.name , s1.roll , s1.marks1 , s1.marks2 , s1.marks3) ; 

// }


// create a structure employee which contains three member employee_name , employee_id , employee_salary  / Take the input from the user . Create five variables for this structure .

// #include <stdio.h>  

// struct employee
// {
//     char employee_name[20]  ; 
//     int employee_id ; 
//     float employee_salary ; 
// };

// int main(){

//     struct employee K; 
//     printf("enter the employee name , id , salary") ; 
//     gets(K.employee_name) ;
//     scanf("%d" , &K.employee_id) ; 
//     scanf("%f" , &K.employee_salary) ; 
     

//     printf("%s %d %f %f %f" , K.employee_name , K.employee_id , K.employee_salary ) ; 

// }

// #include <stdio.h>

// struct person{

//     char name[20] ; 
//     int age ; 
//     struct student{
//         int regno ; 

//     }s ;  
// } ; 
 
// int main(){
//     struct person p ; 
//     // struct student s ;  

//     printf("enter the values \n") ; 
//     scanf("%s" , &p.name)  ;
//     scanf("%d" , &p.age)  ;
//     scanf("%d" , &p.student.regno) ;
//     printf("%d %d %d" , p.name , p.age , p.student.regno) ; 

// }


// create a student structure which include name , registration number and marks of three subject . write a function calculate which calculates the percnetage and display the percentage with the student name , registration number and marks of three subject 

// #include <stdio.h>

// struct student p{

//     char name[18] ;

//     int reg_no ; 

//     int marks{
//         maths.marks1 ; 
//         maths.marks2 ; 
//         maths.marks3 ;  
//     } 

// }
// int main(


//     return 0 ; 
// )





// create a structure person which includes name and age . 

// struct person {
//     char name[50];
//     int age;
// };

// struct person my_person;
 




// #include<stdio.h>

// union number(){

//     int a ; 

//     char name ; 
//     float name ; 
//     float y ; 
// } ; 

// int main(){

//     union number n  ; 
//     n.a = 34 ; 
//     n.y = 34.67894 ; 
//     printf("%d" , sizeof(n));  
// }


// #include <stdio.h>
// int main(){

//     int a[] = {1 ,2,3 ,4 ,5} ;
//     printf("%d\n" , a) ; 
//     printf("%d\n" , &a[0]) ;
// }



// #include <stdio.h>

// int main(){

//     char st[] = "123#ab0" ; 
//     char *st1 = st ; 
//     printf("%s" , st1) ; 
//     return 0  ;
// }


// #include <stdio.h>
// #include <string.h>
// int main(){

//     char st[] = "123#ab0" ; 
//     char st1[10] ;  
//     strncpy(st1 , st , 3) ;  
//     printf("%s\n" , st1 ) ; 
//     printf("%s" , strlen(st1) ) ; 
//     return 0  ;
// }


// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
   
//    // Take any two strings
//    char src[50] = "forgeeks";
//    char dest1[50] = "geeks";
//    char dest2[50] = "geeks";
  
//    printf("Before strcat() function execution, ");
//    printf("destination string : %s\n", dest1);
    
//    // Appends the entire string of src to dest1
//    strcat(dest1, src);
  
//    // Prints the string
//    printf("After strcat() function execution, ");
//    printf("destination string : %s\n", dest1);
  
//    printf("Before strncat() function execution, ");
//    printf("destination string : %s\n", dest2);
    
//    // Appends 3 characters from src to dest2
//    strncat(dest2, src, 3);
     
//    // Prints the string
//    printf("After strncat() function execution, ");
//    printf("destination string : %s\n", dest2);
    
//    return 0;
// }

#include <stdio.h>
#include <string.h>
int main(){
    char st = 'a'+1 ; 
    printf("%c\n",st) ; 
    printf("%c\n",st++) ; 
    printf("%d\n",st) ;

    return 0 ;  
}

