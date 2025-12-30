#include <stdio.h>
// Abhijeet ERP - 10040
int main()
{
    int a[100], n, i, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sum += a[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
