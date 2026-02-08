#include <stdio.h>

int main() {

    int date, age;

    //Collecter l'année de naissance de l'utilisateur
    printf("Welcome guys, what's your bithyear ?\n");
    scanf("%d", &date);

    //Calculer l'âge de l'utilisateur en 2026
    age = 2026 - date;

    //Afficher l'âge de l'utilisateur
    printf("your were born in %d. In 2026, you will be %d years old.\n", date, age);

    return 0;

}