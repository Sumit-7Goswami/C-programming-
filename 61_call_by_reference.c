// Call by reference 
// here the address of the variables is passed to the function as arguments
/* now since the address are passed to the function  ,  the function can now modify the value of a variable in calling function using * and  &         */ 

#include <stdio.h>

// function prototype for call by value
void swapByValue(int a, int b);

// function prototype for call by reference
void swapByReference(int *a, int *b);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // swapping by call by value
    printf("\nSwapping by call by value\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    // swapping by call by reference
    printf("\nSwapping by call by reference\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// function definition for call by value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// function definition for call by reference
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
