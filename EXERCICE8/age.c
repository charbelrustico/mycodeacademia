#include <stdio.h>

int main() {

    //Variable declaration
    int age;

    //Affichage de l'invite de saisie
    printf("Enter your age: ");
    scanf("%d", &age);

    //Affichage du résultat
    if (age > 21)
        printf("1");
    else
        printf("0");
    
    

    return 0;
    
}