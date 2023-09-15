#include <stdio.h>
int main()
{
    int flag = 0;
    int key;
    int a[5];
    printf("Enter the key= ");
    scanf("%d", &key);
    printf("Enter the array element= ");

    for (int j = 0; j < 5; j++)
    {
        if (a[j] == key)
        {
            flag++;
            break;
        }
    }
    if (flag == 1)
    {
        printf("DATA IS FOUND");
    }
    else
    {
        printf("DATA IS  NOT FOUND");
    }
    return 0;
}
