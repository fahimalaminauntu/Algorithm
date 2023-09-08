// complxity best case = age case= worst case = n log(n)
#include <stdio.h>

void print(int arr[], int n);
void divide(int arr[], int L, int R);
void marge(int arr[], int L, int mid, int R);

void main()
{
    int n; // array size.
    printf("Enter how many element : ");
    scanf("%d", &n); // input array size

    int arr[n]; // declare arrray
    printf("Enter the Element : ");
    for (int i = 0; i < n; i++) // taking array element from user
        scanf("%d", &arr[i]);

    printf("Before sorted the array : ");
    print(arr, n);

    divide(arr, 0, n - 1); // call method for sort.
    printf("After sorted the array : ");
    print(arr, n);
}
// print array by function
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

void divide(int arr[], int L, int R)
{
    int mid = 0; // declear mid variable .
    if (L < R)
    {                        // condition true when Left is smaller than Right.
        mid = (L + R) / 2;   // calulate mid value .
        divide(arr, L, mid); // use recurtion for divide array's Left part in single element.

        divide(arr, mid + 1, R); // again use recurtion for divide array's right part in single element.
        marge(arr, L, mid, R);   // marge the single element for build the array.
    }
}

// marge the divided array and sort.
void marge(int arr[], int L, int mid, int R)
{
    int i, j;
    // create two variable that indicate new array size.
    int n1 = mid - L + 1;
    int n2 = R - mid;
    int arrL[n1], arrR[n2]; // declared two array.

    for (i = 0; i < n1; i++) // copy data to the array.
        arrL[i] = arr[L + i];
    for (j = 0; j < n2; j++)
        arrR[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    { // sorting array
        if (arrL[i] <= arrR[j])
        {
            arr[L] = arrL[i];
            i++;
        }
        else
        {
            arr[L] = arrR[j];
            j++;
        }
        L++;
    }

    while (i < n1)
    { // copy remaining element of arrL
        arr[L] = arrL[i];
        i++;
        L++;
    }
    while (j < n2)
    { // copy remaining element of arrR.
        arr[L] = arrR[j];
        j++;
        L++;
    }
}