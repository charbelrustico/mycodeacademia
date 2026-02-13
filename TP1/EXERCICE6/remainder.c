#include <stdio.h>

int main() {

    //Variable declaration
    int num1, num2, remainder;

    //Affichage de l'invite de saisie
    printf("Enter two integers ");
    printf("\n Dividend : ");
    scanf("%d", &num1);
    printf("\n Divisor : ");
    scanf("%d", &num2);

    //Calcul du reste
    remainder = num1 % num2;

    //Affichage du résultat
    printf("\n The remainder of %d / %d = %d", num1, num2, remainder);

    return 0;
    
}