#include <stdio.h>

#define COURSES  5
#define EXAMS    6
#define PASS_MARK 10.0f  // note minimale pour valider

int main() {
    float marks[COURSES][EXAMS];         // notes : 5 cours x 6 examens
    float weights[EXAMS] = {1.25f, 1.0f, 0.9f, 0.75f, 0.6f, 0.5f};

    float totalWeightedMark = 0.0f;
    int   passedCourses = 0;

    // --- Lecture des notes ---
    printf("Enter the marks for each course (enter -1 if exam not taken):\n\n");
    for (int i = 0; i < COURSES; i++) {
        printf("Course %d:\n", i + 1);
        for (int j = 0; j < EXAMS; j++) {
            printf("  Exam %d: ", j + 1);
            scanf("%f", &marks[i][j]);
        }
    }

    // --- Calcul moyenne pondérée ---
    // Pour chaque cours, on cherche le PREMIER examen où la note >= PASS_MARK
    // et on applique le poids correspondant
    printf("\n--- Results ---\n");
    for (int i = 0; i < COURSES; i++) {
        int passed = 0;
        for (int j = 0; j < EXAMS; j++) {
            if (marks[i][j] < 0) break;  // examen non passé (-1)

            if (marks[i][j] >= PASS_MARK) {
                float weighted = marks[i][j] * weights[j];
                printf("Course %d: passed at exam %d | mark=%.2f | weight=%.2f | weighted=%.2f\n",
                       i + 1, j + 1, marks[i][j], weights[j], weighted);
                totalWeightedMark += weighted;
                passedCourses++;
                passed = 1;
                break;  // on s'arrête au premier examen réussi
            }
        }
        if (!passed)
            printf("Course %d: NOT passed\n", i + 1);
    }

    // --- Affichage final ---
    if (passedCourses > 0)
        printf("\nWeighted mean (passed courses): %.2f\n", totalWeightedMark / passedCourses);
    else
        printf("\nNo courses passed.\n");

    return 0;
}

/*
**Concept de moyenne pondérée :
- Chaque examen a un poids différent (ex: 1.25 pour le 1er, 1.0 pour le 2e, etc.)
- Pour chaque cours, on prend la note du PREMIER examen où l'étudiant a réussi (>= 10)
- On multiplie cette note par le poids de l'examen pour obtenir la note pondérée

**Exemple :**
```
Course 1: passed at exam 1 | mark=15.00 | weight=1.25 | weighted=18.75
Course 2: passed at exam 3 | mark=12.00 | weight=0.90 | weighted=10.80
...
Weighted mean: 14.77 */