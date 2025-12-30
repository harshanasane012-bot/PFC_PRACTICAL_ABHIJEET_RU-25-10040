#include <stdio.h>
//Abhijeet //
//RU 25 10040//
void triangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    triangle(n);
    return 0;
}

//OUTPUT
// Enter height: 10
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
// * * * * * * * 
// * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * * 


