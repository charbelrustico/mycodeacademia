#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 100) {
        printf("\n%d is larger than 100.", a);
    } else {
        printf("\n%d is less than 100.", a);
    }

    return 0;
}