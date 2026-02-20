#include <stdio.h>

int main() {
    //Variable declaration
    float amountPesetas, amountDollars, amountEuros;

    //Affichage de l'invite de saisie
    printf("Welcome to currency converter. \n Enter amount in Pesetas : ");
    scanf("%f", &amountPesetas);
    
    //Conversion of Pesetas to Euros and Euro to Dollars
    amountEuros = amountPesetas / 166.386;
    amountDollars = amountEuros * 1.31; //On étend le programme initialement prévu pour convertir les Pesetas en Euros, pour convertir aussi les Euros en Dollars.
    
    //Affichage du résultat
    printf("\n Convertion of %.2f Pesetas to Euros = %.2f Euro \n Convertion of Euro to Dollars = %.2f $", amountPesetas, amountEuros, amountDollars);   
    

    return 0;
    
}