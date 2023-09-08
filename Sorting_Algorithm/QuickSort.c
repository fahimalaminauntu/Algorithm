#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int left, int right)
{
    int pivot = arr[left];
    while (left < right)
    {
        if (pivot == arr[left])
        {
            if (arr[right] > pivot)
            {
                right = right - 1;
            }
            else if (arr[right] <= pivot)
            {
                swap(&arr[left], &arr[right]);
                pivot = arr[right];
                left = left + 1;
            }
        }
        else if (pivot == arr[right])
        {
            if (arr[left] < pivot)
            {
                left = left + 1;
            }
            else if (arr[left] >= pivot)
            {
                swap(&arr[left], &arr[right]);
                pivot = arr[left];
                right = right - 1;
            }
        }
    }
    return left;
}
void quicksort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pivot = partition(arr, left, right);
        quicksort(arr, left, pivot - 1);
        quicksort(arr, pivot + 1, right);
    }
}
int main()
{
    printf("Enter The size of Array :");
    int n, i;
    scanf("%d", &n);
    int a[n];
    printf("Enter the Element of the Array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}