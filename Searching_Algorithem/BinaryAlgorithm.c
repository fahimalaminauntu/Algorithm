#include <stdio.h>
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 50, 100, 102};
    int SearchingItem = 1103;
    int left, right, middle;
    left = 0;
    right = 7;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == SearchingItem)
        {
            printf("Item Found at index : %d\n", middle);
            // break;
            return 0;
        }
        else if (arr[middle] < SearchingItem)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Item not in this Array !!\n");

    return 0;
}