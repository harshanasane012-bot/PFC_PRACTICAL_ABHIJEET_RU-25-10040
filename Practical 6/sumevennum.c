#include<stdio.h>
//Abhijeet //
//RU 25 10040//
int main () {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
           continue;
           sum += i;

    }
    printf("Sum of even numbers = %d", sum);
    return 0;


}  
   //OUTOUT
//Enter n: 5
//Sum of even numbers = 6

