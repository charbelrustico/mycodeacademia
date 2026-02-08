#include <stdio.h>

int main() {

    //Variable declaration
    int TimeInSeconds, TimeInMinutes, RemainderTimeSeconds;

    //Affichage de l'invite de saisie
    printf("Enter time in seconds : ");
    scanf("%d", &TimeInSeconds);

    //Calcul du temps en minutes et secondes ET du reste de secondes
    TimeInMinutes = TimeInSeconds / 60;
    RemainderTimeSeconds = TimeInSeconds - (TimeInMinutes * 60);

    //Affichage du résultat
    printf("\n Time = %d minutes and %d seconds", TimeInMinutes, RemainderTimeSeconds);

    return 0;
    
}