#include <stdio.h>
int main() {
    int a;

    //Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);

    //Check if the number is even or odd 
    if (a % 2 == 0) {
        printf("\n%d is an even number.", a);

        //Check if the number is divisible by 3
        if(a%3 == 0) {
            printf("\n%d is also divisible by 3.", a);
        } else {
            printf("\n%d is not divisible by 3.", a);
        }
    } else {
        printf("\n%d is an odd number.", a);
    }

    return 0;

}