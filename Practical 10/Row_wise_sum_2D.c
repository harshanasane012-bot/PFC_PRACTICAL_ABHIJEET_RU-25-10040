#include <stdio.h>
// Abhijeet ERP - 10040
int main()
{
    int a[10][10], r, c, i, j, sum;

    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// OUTPUT
// Sum of row 1 = 6860247
// Sum of row 2 = 9
// Sum of row 3 = 6859185
// Sum of row 4 = 23593617
// Sum of row 5 = 1350419429
// Sum of row 6 = -972343759
// Sum of row 7 = 17842102
// Sum of row 8 = 1992091146
