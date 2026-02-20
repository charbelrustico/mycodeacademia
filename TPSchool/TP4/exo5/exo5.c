#include <stdio.h>

#define N 4

int main() {
    int mat[N][N];

    // --- Remplir tout à 1 ---
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            mat[i][j] = 1;

    printf("Matrix (all 1s):\n");
     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    // --- Mettre la diagonale principale à 1 ---
    // La diagonale principale : les cases où i == j
    // ex: (0,0), (1,1), (2,2), (3,3)
    // On remet tout à 0 d'abord, puis diagonale à 1
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            mat[i][j] = 0;

    for (int i = 0; i < N; i++)
        mat[i][i] = 1;  // i == j → diagonale

    printf("\nMatrix (diagonal only):\n");
     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}