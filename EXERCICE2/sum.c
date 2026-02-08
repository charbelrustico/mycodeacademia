#include <stdio.h>

int main() {
    // Déclarer et initialiser les variables
    int a = 5, b = 7, c = 9, sum; 

    //Calculer la somme de a, b et c
    sum = a + b + c;

    //Afficher le résultat
    printf("This is a initialized variable a = %d, b = %d, c = %d. \n The sum of a, b and c is: %d\n", a, b, c, sum);

    // L'utilisateur peut aussi lire de nouvelles valeurs de a, b et c sur le clavier
    printf("Now, you can enter new values \n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    // Recalculer la somme avec les nouvelles valeurs
    sum = a + b + c;

    // Afficher le nouveau résultat
    printf("The new sum of a, b and c is: %d\n", sum);

    return 0;
    
}