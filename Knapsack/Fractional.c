#include <stdio.h>
void knapsack(float weight[], float value[], float profit[], int n, float sackweight)
{

    float totalweight = 0;
    float totalvalue = 0;
    float x[n];
    int i = 0;

    while (n != 0)
    {
        if (sackweight > weight[i])
        {
            sackweight = sackweight - weight[i];
            x[i] = 1;
            printf("%.2f\n", sackweight);
        }
        else
        {
            if (sackweight != 0)
            {
                x[i] = sackweight / weight[i];
                sackweight = sackweight - (sackweight / weight[i]);
            }
            else
            {
                x[i] = 0;
            }
            float temp = weight[i];
            weight[i] -= sackweight;
            if (sackweight != 0)
            {
                if (weight[i] > 0)
                {
                    sackweight = sackweight - weight[i];
                    x[i] = weight[i] / temp;
                }
                weight[i] = temp;
            }
            else
            {
                x[i] = 0;
            }
            printf("%.2f\n", sackweight);
        }

        totalweight = totalweight + (weight[i] * x[i]);
        totalvalue = totalvalue + (value[i] * x[i]);
        i++;
        n--;
    }

    printf("\n\n%.2f,%2f\n", totalweight, totalvalue);
}

int main()
{

    int n;
    printf("Enter The number of item :");
    scanf("%d", &n);

    float weight[n];
    float value[n];
    float profit[n];

    printf("Enter weight & value :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f%f", &weight[i], &value[i]);
    }
    for (int i = 0; i < n; i++)
    {
        profit[i] = value[i] / weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f", profit[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (profit[i] < profit[j])
            {
                float t1 = profit[i];
                profit[i] = profit[j];
                profit[j] = t1;

                float t2 = weight[i];
                weight[i] = weight[j];
                weight[j] = t2;

                float t3 = value[i];
                value[i] = value[j];
                value[j] = t3;
            }
        }
    }

    printf("W,v=p\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f,%.2f =", weight[i], value[i]);
        printf("%.2f\n", profit[i]);
    }

    float sackweight;
    printf("\n\nEnter the Sack Weight :");
    scanf("%f", &sackweight);
    knapsack(weight, value, profit, n, sackweight);
    return 0;
}
