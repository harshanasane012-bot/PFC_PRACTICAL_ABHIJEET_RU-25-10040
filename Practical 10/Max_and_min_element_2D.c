#include <stdio.h>
// Abhijeet ERP - 10040
int main()
{
    int a[10][10], r, c, i, j, max, min;

    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    max = min = a[0][0];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}
// OUTPUT 
// Max = 2009411753
// Min = -2
