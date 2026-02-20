#include <stdio.h>

#define N 3   // lignes
#define M 4   // colonnes

int main() {
    int mat[N][M];
    int transposed[M][N];  // la transposée a les dimensions inversées !

    // --- Lecture ---
    printf("Enter values for a %dx%d matrix:\n", N, M);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            printf("  mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }

    // --- Affichage matrice originale ---
    printf("\nOriginal matrix (%dx%d):\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            printf("%4d ", mat[i][j]);
        printf("\n");
    }

    // --- Calcul transposée ---
    // La transposée : on échange lignes et colonnes
    // mat[i][j] devient transposed[j][i]
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            transposed[j][i] = mat[i][j];  // échange i et j

    // --- Affichage transposée ---
    printf("\nTransposed matrix (%dx%d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            printf("%4d ", transposed[i][j]);
        printf("\n");
    }

    return 0;
}

/*
**Concept transposée :**
```
Original 3x4 :        Transposée 4x3 :
 1  2  3  4            1  5  9
 5  6  7  8            2  6  10
 9  10 11  12          3  7  11
                       4  8  12
```*/