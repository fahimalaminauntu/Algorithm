
#include <stdio.h>

int main()
{
    int n, check, count = 0;
    printf("Enter Array Size :");
    scanf("%d %d", &n, &check);

    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == check)
        {
            printf("Index Number is: %d\n", i);
            count++;
            return 0;
        }
    }

    if (count == 0)
    {
        printf("Number Not Found!!\n");
    }

    return 0;
}