#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    if (a % b == 0) {
        printf("\n%d the first number is divisible by the second one : %d.", a, b);
    } else {
        printf("\n%d the first number is not divisible by the second one : %d.", a, b);
    }

    return 0;
}