// write a program containing functions which counts the number of positive integers in an array .

#include <stdio.h>

int Count_Positive(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int arr[] = {1, -3, 3, 5, 9, -6, -7, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positive_count = Count_Positive(arr, n);

    printf("The total positive number in the array is %d", positive_count);
    return 0;
}
