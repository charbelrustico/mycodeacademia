#include <stdio.h>

int main() {
    /*
        On va écrire un programme qui trie un tableau de 10 éléments en utilisant l'algorithme de tri à bulles (bubble sort).
    */
    int Tableau[10], i, temp;
    //Lecture des éléments du tableau
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf(" Element %d: ", i + 1);
        scanf("%d", &Tableau[i]);
    }

    //Affichage du tableau avant le tri
    printf("\nVoici le Tableau avant le TRI par BULLES:\n");
    for (i = 0; i < 10; i++) {
        printf("\n Valeur a la position %d : %d ", i,Tableau[i]);
    }

    //Tri à bulles
    for (i = 0; i < 9; i++) { //La boucle externe pour parcourir le tableau
        for (int j = 0; j < 9 - i; j++) { // La boucle interne pour comparer les éléments adjacents c'est à dire que le dernier élément est déjà trié après chaque itération de la boucle externe
            if (Tableau[j] > Tableau[j + 1]) { // Si l'élément actuel est plus grand que le suivant, on les échange
                // On utilise une variable temporaire pour stocker l'élément actuel pendant l'échange
                printf("\n DEBUG\n  Echange de %d et %d via la variable temporaire\n", Tableau[j], Tableau[j + 1]);
                temp = Tableau[j];
                Tableau[j] = Tableau[j + 1];
                Tableau[j + 1] = temp;
            }
        }
    }

    //Affichage du tableau après le tri
    printf("\nVoici le Tableau apres le TRI par BULLES:\n");
    for (i = 0; i < 10; i++) {
        printf("\n Valeur a la position %d : %d ", i,Tableau[i]);
    }

    return 0;
}