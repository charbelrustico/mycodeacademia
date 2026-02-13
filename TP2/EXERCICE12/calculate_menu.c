#include <stdio.h>
#include <math.h>

int main() {
    
    // Declaration of variables
    int choice;
    float area, base, height, edgea, edgeb, edgec;

    // Display the menu
    printf("Calculate the area");
    printf("\n-------------------");
    printf("\n1. Calculate the area of a triangle (base,height)");
    printf("\n2. Calculate the area of a trapezoid (edge a, edge b, height)");
    printf("\n3. Calculate the area of a rectangle (base, height)");
    printf("\n4. Calculate the area of a rectangle (edge a, edge b, edge c)");

    //Take the user's choice
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    // Calculate the area based on the user's choice
    switch (choice) {
        case 1:
            //Collect datas for calcul
            printf("\nEnter datas of the triangle: ");
            printf("\n Base: ");
            scanf("%f", &base);
            printf(" Height: ");
            scanf("%f", &height);

            // Calculate the area of the triangle
            area = (base * height) / 2;

            // Display the result
            printf("\nThe area of the triangle is: %.2f", area);
            
            break;
        case 2:
            //Collect datas for calcul
            printf("\nEnter datas of the trapezoid: ");
            printf("\n  Edge a: ");
            scanf("%f", &edgea);
            printf("  Edge b: ");
            scanf("%f", &edgeb);
            printf("  Height: ");
            scanf("%f", &height);

            // Calculate the area of the trapezoid
            area = ((edgea + edgeb) / 2) * height ;

            // Display the result
            printf("\nThe area of the trapezoid is: %.2f", area);
            
            break;
        case 3:
            //Collect datas for calcul
            printf("\nEnter datas of the rectangle: ");
            printf("\n  Base: ");
            scanf("%f", &base);
            printf("  Height: ");
            scanf("%f", &height);

            // Calculate the area of the rectangle
            area = base * height;

            // Display the result
            printf("\nThe area of the rectangle is: %.2f", area);
            
            break;
        case 4:
            /*Collect datas for calcul
                Context false because the area of a rectangle cannot be calculated with three edges.
                I considered the three edges as the dimensions of any type of triangle
                Then I used the formula of Heron to calculate the area of a triangle with three edges.
            */
            printf("\nEnter datas of the rectangle: ");
            printf("\n  Edge a: ");
            scanf("%f", &edgea);
            printf("  Edge b: ");
            scanf("%f", &edgeb);
            printf("  Edge c: ");
            scanf("%f", &edgec);

            float s = (edgea + edgeb + edgec) / 2; // Semi-perimeter
            area = sqrt(s * (s - edgea) * (s - edgeb) * (s - edgec));

            // Display the result
            printf("\nThe area of the rectangle is: %.2f\n", area);
            
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }


    return 0;
}