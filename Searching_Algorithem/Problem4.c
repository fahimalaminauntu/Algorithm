#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i += 2) {
        a[i] = 0;
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i += 2) {
        if (i != 2) {
            a[i] = 0;
        }
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }

    return 0;
}