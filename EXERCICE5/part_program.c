#include <stdio.h>

int main() {

    //Variable declaration
    int i1, i2, i3;
    float r1, r2, r3;
    printf("VARIABLE DECLARATION : \n i1, i2, i3 are integers and r1, r2, r3 are floats\n");

    //Affectation of values
    i1 = 12;
    i2 = 5;
    r1 = 12.0;
    r2 = 5;
    printf("AFFECTATION OF VALUES : \n i1 = %d, i2 = %d, r1 = %.2f, r2 = %.2f\n", i1, i2, r1, r2);

    //Expressions
    printf("EXPRESSIONS : \n");
    r3 = r1 / r2;
    printf(" r3 (r1 / r2) = %.2f\n", r3);
    r3 = i1 / i2;
    printf(" r3 (i1 / i2) = %.2f\n", r3);
    i3 = i1 / r2;
    printf(" i3 (i1 / r2) = %d\n", i3);
    

    return 0;
}