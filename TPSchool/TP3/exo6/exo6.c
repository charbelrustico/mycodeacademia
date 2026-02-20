#include <stdio.h>
#include <stdlib.h>
#include <math.h> //pour complier ajouter -lm pour lier la bibliothèque au programme

int main(){
    float x, x_pow;
    int i,n;

    printf("Entrer le nombre : ");
    scanf("%f",&x);

    printf("Entrer l'exposant n : ");
    scanf("%d",&n);

    //Cas avec la fonction puissance
    x_pow=(float)pow((double)x,(double)n); //Appliquer le type double à l'intérieur de la fonction et ensuite appliquer le type float à nouveau afin d'éviter les problèmes de précisions
    printf("\n %2.f ^ %d avec la fonction pow = %2.f\n",x,n,x_pow);

    //Cas avec une boucle : on boucle n fois x_pow = x_pow * x
    x_pow=x; 
    for ( i = 1; i < n; i++)
    {
        x_pow *= x;
    }
    printf("\n %2.f ^ %d avec la boucle = %2.f\n",x,n,x_pow);

    return 0;
}