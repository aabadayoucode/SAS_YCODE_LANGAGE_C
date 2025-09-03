#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractere: ");
    scanf(" %c", &caractere);

    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
        printf("%c est un alphabet", caractere);
        if (caractere >= 'A' && caractere <= 'Z') {
            printf("%c est une majuscule", caractere);
        } else {
            printf("%c est une minuscule", caractere);
        }
    } else {
        printf("%c n'est pas un alphabet", caractere);
    }

    return 0;
}
