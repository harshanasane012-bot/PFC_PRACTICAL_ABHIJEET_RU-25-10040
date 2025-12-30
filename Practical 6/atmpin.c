#include <stdio.h>
//Abhijeet //
//RU 25 10040//
int main() {
    int pin, attempts = 0;
    int correctPin = 1234;

    while(attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if(pin == correctPin) {
            printf("Access Granted");
            return 0;
        } else {
            printf("Wrong PIN\n");
        }
        attempts++;
    }

    printf("ATM Blocked");
    return 0;
}

//OUT PUT
// Enter PIN: 1234

//Access Granted

