#include <stdio.h>
//Abhijeet //
//RU 25 10040//
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d", x, y);
    return 0;
}
//OUTPUT 
// Enter x and y: 50 60
// After swap: x = 60, y = 50
