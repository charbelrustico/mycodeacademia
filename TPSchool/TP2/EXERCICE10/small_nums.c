#include <stdio.h>

int main() {
    //Declaration of variables
    int a, b, c, d, e, smallest;

    //Read five integers from the user
    printf("Enter five integers: ");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);
    printf("e: ");
    scanf("%d", &e);

    //Find the smallest number among the five integers
    smallest = a; // Assume a is the smallest initially

    for (int i = 0; i < 4; i++) { // Using a loop to compare all numbers
        if (b < smallest) {
            smallest = b; // Update smallest if b is smaller
        }
        if (c < smallest) {
            smallest = c; // Update smallest if c is smaller
        }
        if (d < smallest) {
            smallest = d; // Update smallest if d is smaller
        }
        if (e < smallest) {
            smallest = e; // Update smallest if e is smaller
        }
    }

    //Print the smallest number
    printf("The smallest number is: %d\n", smallest);

    return 0;
}