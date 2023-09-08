#include <stdio.h>
int main()
{
    int A[] = {12, 5, 3, 2, 1, -12, -30, -50, 10, 100};
    int i, j, size = 10;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("After Sorting :\t");

    for (i = 0; i < size; i++)
    {
        printf("%d\t", A[i]);
    }
    return 0;
}