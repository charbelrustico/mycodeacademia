#include <stdio.h>

int main()
{
    int num, sum = 0, count = 0, stopCod = 3;

    do
    {
        printf("Enter number %d : ", count + 1);
        scanf("%d", &num);

        sum += num;
        count++;

        printf("  Sum: %d | Count: %d\n", sum, count);

    } while (count < 10 && sum <= 100); // continue tant que les 2 limites ne sont pas atteintes

    // Vérification APRES la boucle, bon ordre des conditions
    if (count == 10 && sum > 100)
        stopCod = 2;          // les deux conditions atteintes
    else if (count == 10)
        stopCod = 0;          // seulement 10 nombres
    else if (sum > 100)
        stopCod = 1;          // seulement somme > 100

    printf("\nThe program stopped because ");

    switch (stopCod)
    {
        case 0:
            printf("you introduced %d numbers!\n", count);
            break;
        case 1:
            printf("the sum reached %d (> 100)!\n", sum);
            break;
        case 2:
            printf("you introduced %d numbers AND the sum reached %d (> 100)!\n", count, sum);
            break;
        default:
            break;
    }

    return 0;
}