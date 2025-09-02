#include <stdio.h>

int main() {
    int nombre;
    int i;

    // Lire un entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Affichage en hexadécimal
    printf("Hexadécimal : %X\n", nombre);

    // Affichage en binaire
    printf("Binaire : ");
    for (i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (nombre >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}
