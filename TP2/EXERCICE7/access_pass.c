#include <stdio.h>

int main() {
    int a,b,c;

    //Reads three integers from the user
    printf("Enter three integers: ");
    printf("\na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    //If their respectives values are 1,2,3 print "Access granted"
    if (a == 1 && b == 2 && c == 3) {
        printf("Access granted");
    } else {
        printf("Access denied");
    }

    return 0;

}