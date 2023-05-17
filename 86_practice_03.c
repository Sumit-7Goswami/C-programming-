// write a function slice() to slice a string . It should change the original string such that it is now the sliced string . Take m and n as the start and ending position for slice .
#include <stdio.h>
#include <string.h>

void slice(char *str, int m, int n)
{
    int i;
    for (i = 0; i < n-m && str[i + m] != '\0'; i++)
    {
        str[i] = str[i + m];
    }
    str[i] = '\0';
}


int main()
{

    char str[] = "GOSWAMIbro";
    slice(str, 1, 6);

    printf("%s", str);
    return 0;
}