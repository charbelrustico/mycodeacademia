#include <stdio.h>

int main() {

    //Declaration of variable
    int number, digit1, digit2, sum, nbr_even=0;

    //Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    //Check if the number is a two-digit number
    if (number >= 10 && number <= 99) {
        //Extract the digits of the number
        digit1 = number / 10; //First digit
        digit2 = number % 10; //Second digit

        //Calculate the sum of the digits
        sum = digit1 + digit2;

        //Check if the digits are even or odd
        if (digit1 % 2 == 0) {
            nbr_even++;
        }
        if (digit2 % 2 == 0) {
            nbr_even++;
        }
        //Print the results
        printf("\nThe sum of the digits is: %d.", sum);
        printf("\nThe number of even digits is: %d.", nbr_even);
    } else {
        printf("\n%d is not a two-digit number.", number);
    }

    return 0;
}