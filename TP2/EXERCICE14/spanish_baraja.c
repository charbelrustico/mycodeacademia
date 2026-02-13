#include <stdio.h>

int main() {
    int c;

    //Read number 
    printf("Spanish Baraja CARD\nEnter a number: ");
    scanf("%d", &c);

    //Print message according to the number entered
    switch (c) {
        case 1:
            printf("As");
            break;
        case 10:
            printf("Sota");
            break;
        case 11:
            printf("Caballo");
            break;
        case 12:
            printf("Rey");
            break;
        default:
            if (c >= 2 && c < 10) {
                printf("It is not an As or Figure");
            } else {
                printf("Not a valid value");
            }
    }
}