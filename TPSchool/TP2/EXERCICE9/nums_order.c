#include <stdio.h>

int main() {
    int a,b,c, temp;

    //Read three integers from the user
    printf("Enter three integers: ");
    printf("\na: ");
    scanf("%d", &a);    
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    //Order the numbers in decreasing order
    for (int i = 0; i < 2; i++) { // Using a loop to ensure all numbers are compared and ordered correctly
        if (a < b) {
            temp = a; // Swap a and b with a temporary variable
            a = b;
            b = temp;
        }
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a < c) {
            temp = a;
            a = c;
            c = temp;
        }
    }

    //Print the numbers in decreasing order
    printf("The numbers in decreasing order are: %d, %d, %d\n", a, b, c);

    return 0;
}