#include <stdio.h>

int main() {
    //Declare X variable of f(x) function and s solution variable
    float x, s;

    //User read the value of X
    printf("Enter the value of X: ");
    scanf("%f", &x);

    //Calculate the value of f(x) function for each case
    if (x <= 0) {
        s = x+3;
    } else if (x > 0) {
        s = (x*x) + 2;
    } else {
        printf("Invalid value of X, not solution for this case");
    }

    //Print the solution
    printf("The solution of f(x): %.2f", s);

    return 0;}