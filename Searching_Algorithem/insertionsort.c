#include <stdio.h>
int main()
{
    int a[5];
    int temp;
    printf("Enter the array element= ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int j = i;
        while (j > 0 && a[j] < a[j - 1])
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}