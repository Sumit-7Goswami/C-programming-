
// write a program to count the occurence of a given character in a string . 


// using normal code
// #include <stdio.h>

// int main() {
//     char str[100];
//     char ch;
//     int count = 0;
//     int i;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     printf("Enter a character to count: ");
//     scanf(" %c", &ch);

//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             count++;
//         }
//     }

//     printf("The character '%c' occurs %d times in the string.\n", ch, count);

//     return 0;
// }




// using function

#include <stdio.h>
// int count_char(char str[], char ch);

int count_char(char str[], char ch) {
    int count = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    return count;
}


int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int count = count_char(str, ch);

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}



// using pointers 
// #include <stdio.h>

// int count_char(char *str, char ch);

// int main() {
//     char str[100];
//     char ch;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     printf("Enter a character to count: ");
//     scanf(" %c", &ch);

//     int count = count_char(str, ch);

//     printf("The character '%c' occurs %d times in the string.\n", ch, count);

//     return 0;
// }

// int count_char(char *str, char ch) {
//     int count = 0;

//     while (*str) {
//         if (*str == ch) {
//             count++;
//         }
//         str++;
//     }

//     return count;
// }

