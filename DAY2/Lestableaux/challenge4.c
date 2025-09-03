#include <stdio.h>

int main() {
    int taille;

    printf("Donner la taille du tableau : ");
    scanf("%d", &taille);

    int original[taille], copie[taille];


    for (int i = 0; i < taille; i++) {
        printf("Donner la valeur %d : ", i + 1);
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < taille; i++) {
        copie[i] = original[i];
    }

    printf("\nTableau original : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", original[i]);
    }

    printf("\nTableau copie    : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", copie[i]);
    }

    printf("\n");
    return 0;
}
