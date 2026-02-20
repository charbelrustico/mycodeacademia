#include <stdio.h>

// Fonction pour compter le nombre de chiffres d'un nombre
int countDigits(int n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Condition de sortie : 0 ou négatif
        if (num <= 0) {
            printf("End of program.\n");
            break;  // on sort du do-while
        }

        int digits = countDigits(num);
        int isEven = (num % 2 == 0);

        if (digits >= 3 && isEven) {
            printf("Large even number\n");
        }
        // si positif mais < 3 digits (ou impair >= 3 digits) : on relit simplement

    } while (num > 0);  // continue tant que positif

    return 0;
}