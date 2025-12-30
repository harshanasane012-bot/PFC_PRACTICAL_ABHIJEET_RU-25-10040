#include <stdio.h>
// Abhijeet ERP - 10040
int main()
{
    int a[10][10], n, i, j, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
// OUTPUT
// Sum of diagonal elements = -1854931966
