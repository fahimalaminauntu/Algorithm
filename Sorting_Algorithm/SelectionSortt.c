#include <stdio.h>
int main()
{
    int A[] = {3, -9, -6, 13, 20, 40, 72, 46};
    int i, j;
    for (i = 0; i < 7; i++)
        for (j = i + 1; j < 8; j++)
            if (A[j] < A[i])
            {
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
    printf("After Selection Sort :");
    for (i = 0; i < 8; i++)
    {
        printf("%d\t", A[i]);
    }
    return 0;
}