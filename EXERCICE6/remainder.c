#include <stdio.h>

int main() {

    //Variable declaration
    int num1, num2, remainder;

    //Affichage de l'invite de saisie
    printf("Enter two integers ");
    ptintf("\n Dividend : ");
    scanf("%d", &num1);
    printf("\n Divisor : ");
    scanf("%d", &num2);

    remainder = num1 % num2;
    printf("\n The remainder of %d / %d = %d", num1, num2, remainder);

    return 0;
    
}