
// write a program using a function which calculates the sum and average of two numbers .Use pointers and print the values of Sum and average in main()

#include <stdio.h>
#include <stdlib.h>

void avg(int *a, int *b);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    avg(&num1, &num2);

    return 0;
}

void avg(int *a, int *b) {
    int sum = *a + *b;
    float average = (float)sum / 2;

    printf("Sum is %d\n", sum);
    printf("Average is %f\n", average);
}
