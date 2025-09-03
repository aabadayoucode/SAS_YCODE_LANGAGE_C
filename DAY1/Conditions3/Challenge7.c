#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractere : ");
    scanf(" %c", &caractere);

    if (caractere >= 65 && caractere <= 90) {
        printf("%c est une lettre majuscule.\n", caractere);
    } else {
        printf("%c une lettre muniscule.\n", caractere);
    }

    return 0;
}
