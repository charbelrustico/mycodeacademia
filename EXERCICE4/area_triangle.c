#include <stdio.h>
#include <math.h>

int main() {

    //Déclaration des variables
    int base, height, hypotenuse, circumference;
    float area;

    //Affichage de l'invite de saisie
    printf("We need few information on a triangle \n");
    printf(" Enter a height : ");
    scanf("%d", &height);
    printf(" Enter a lenght of base : ");
    scanf("%d", &base);

    //Calcul de l'aire, de l'hypotenuse et de la circonférence
    area = (base * height) / 2;
    hypotenuse = sqrt((base^2) + (height^2));
    circumference = base + height + hypotenuse;

    //Affichage du résultat
    printf("The right-angled triangle with base %d and height %d has an area of %.2f meter squared. \n Her circumference gives %d\n", base, height, area, circumference);

    return 0;
}