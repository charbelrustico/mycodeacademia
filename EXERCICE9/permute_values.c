#include <stdio.h>
#include <string.h>

int main() {
    //Variable declaration
    char a[20], b[20], temp[20];

    //Affichage de l'invite de saisie
    printf("Enter value of a: ");
    scanf("%s", a);
    printf("Enter value of b: ");
    scanf("%s", b);

    printf("Before permutation:\n a = %s\n b = %s\n", a, b);

    //Permutation des valeurs de a et b en utilisant une variable temporaire et la fonction strcpy
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);

    //Affichage du résultat
    printf("After permutation:\n");
    printf("a = %s\n", a);
    printf("b = %s\n", b);

    return 0;
    
}