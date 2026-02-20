#include <stdio.h>

int main() {
    //Declaration of variables
    float x1, y1, x2, y2, m;

    //Reading the coordinates of the two points
    printf("Enter the coordinates of the first point (x1 y1): ");
    printf("\nx1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    printf("\nEnter the coordinates of the second point (x2 y2): ");
    printf("\nx2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    //Calculating the slope of the line
    if(x2 - x1 != 0) {
        m = (y2 - y1) / (x2 - x1);
        printf("\nThe slope of the line is: %.2f\n", m);
    } else {
        printf("\nThe line is vertical, slope is undefined.\n");
    }

    return 0;
}