// write a program to insert a number in an array that is already sorted in ascending order . 
#include <stdio.h>

int main() {
    int n, num, i, j, arr[100];

    // Input the number of elements and the array elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the array elements in ascending order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to be inserted
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    // Find the position to insert the number
    i = 0;
    while (i < n && arr[i] < num) {
        i++;
    }

    // Shift the array elements to the right
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the number at the correct position
    arr[i] = num;
    n++;

    // Output the updated array
    printf("The array after insertion of %d is: ", num);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
