/*
Challenge 2 : Longueur de la Chaîne
Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen()
*/

#include <stdio.h>


int main() {
    char chaine[100];
    int longueur = 0;

    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin); 

    while (chaine[longueur] != '\0') {
        longueur++;
    }

    printf("La longueur de la chaine est : %d\n", longueur);

    return 0;
}
