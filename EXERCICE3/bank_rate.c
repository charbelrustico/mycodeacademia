#include <stdio.h>

int main() {
    //Déclaration des variables
    float interest_rate=-1, initial_amount, final_amount, interest_amount;

    //Affichage de l'invite de saisie
    printf("How much money do you want to deposit now ? ");
    scanf("%f", &initial_amount);

    //Petit contrôle pour éviter les taux d'intérêts négatifs ou supérieurs à 100%
    while (interest_rate < 0 || interest_rate > 100){
        printf("What is the interest rate in your bank ? ");
        scanf("%f", &interest_rate);
    }

    //Calcul de l'intérêt et du montant final
    interest_amount = initial_amount * (interest_rate / 100);
    final_amount = initial_amount + interest_amount;

    //Affichage du résultat
    printf("It's done ! \n your interest is %.2f CFA \n your final amount is %.2f CFA\n", interest_amount, final_amount);
    
    return 0;
}