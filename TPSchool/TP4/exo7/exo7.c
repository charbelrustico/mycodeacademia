#include <stdio.h>

#define MAX_BITS 16           // on limite à 16 bits → valeur max = 65535
#define MAX_VALUE 65535

int main() {
    int n;
    int binary[MAX_BITS] = {0};  // tableau pour stocker les bits

    // --- Lecture avec validation ---
    do {
        printf("Enter a positive integer (0 to %d): ", MAX_VALUE);
        scanf("%d", &n);
    } while (n < 0 || n > MAX_VALUE);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // --- Conversion en binaire ---
    // Algorithme : diviser par 2 et stocker les restes
    int temp = n;
    int index = 0;

    while (temp > 0) {
        binary[index] = temp % 2;  // reste = 0 ou 1
        temp = temp / 2;
        index++;
    }

    // --- Affichage (à l'envers car on a rempli de droite à gauche) ---
    printf("Binary representation of %d : ", n);
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

/*
**Concept de conversion décimal → binaire :**```

**Trace pour n = 13 :**
```
13 / 2 = 6  reste 1  → binary[0] = 1
 6 / 2 = 3  reste 0  → binary[1] = 0
 3 / 2 = 1  reste 1  → binary[2] = 1
 1 / 2 = 0  reste 1  → binary[3] = 1

Affichage à l'envers : 1 1 0 1  → 1101 = 13 en binaire
```*/