#include <stdio.h>

int main(){

    //Declaration of variable
    int a, b;

    //Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    //Check which number is larger
    if (a > b) {
        printf("\n%d is larger than %d.", a, b);
    } else if (b > a) {
        printf("\n%d is larger than %d.", b, a);
    } else {
        printf("\nThe two numbers are equal.");
    }

    return 0;
}