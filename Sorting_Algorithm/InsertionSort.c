#include <stdio.h>
int main()
{
    int a[] = {1, 13, 9, 3, 2};
    int i, value, hole;
    for (i = 1; i < 5; i++)
    {
        value = a[i];
        hole = i;
        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    printf("The sorted array is :\t");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}