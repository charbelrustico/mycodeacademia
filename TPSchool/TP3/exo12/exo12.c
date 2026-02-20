#include <stdio.h>

int main() {

    int amount;          // quantité du produit (ex: 3 stylos)
    float unitPrice;     // prix d'une unité (ex: 250f)
    float linePrice;     // prix de la ligne = amount x unitPrice
    float totalPrice = 0.0f;  // toujours initialiser à 0
    int nbrLines = 0;         // toujours initialiser à 0

    printf("Welcome to the shopping checkout!\n\n");

    // Boucle principale : une itération = une ligne du panier
    do {
        // --- Lire la quantité (répéter si négatif) ---
        do {
            printf("Enter number of products (0 to finish): ");
            scanf("%d", &amount);
        } while (amount < 0);  // redemander si négatif

        // Si l'utilisateur entre 0, on arrête
        if (amount == 0) break;

        // --- Lire le prix unitaire (répéter si négatif ou nul) ---
        do {
            printf("Enter value of product unit: ");
            scanf("%f", &unitPrice);
        } while (unitPrice <= 0);  // redemander si négatif ou 0

        // --- Calculs ---
        linePrice   = amount * unitPrice;
        totalPrice += linePrice;
        nbrLines++;  // on compte cette ligne

        printf("  Line price: %.2f€\n\n", linePrice);

    } while (1);  // la sortie se fait via le break quand amount == 0

    // --- Affichage final ---
    printf("\n--- Shopping Cart Summary ---\n");
    printf("Number of lines : %d\n", nbrLines);
    printf("Total price     : %.2f€\n", totalPrice);

    return 0;
}