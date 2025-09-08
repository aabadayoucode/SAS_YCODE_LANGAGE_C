/*

Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne. Affichez la chaîne résultante.

*/
#include <stdio.h>
#include <string.h>
#define MAX_TAILLE 50

int main() {
    char chaine1[MAX_TAILLE];
    char chaine2[MAX_TAILLE];


    printf("Donner la chaine 1 : ");
    fgets(chaine1,MAX_TAILLE,stdin);
    chaine1[strcspn(chaine1, "\n")]='\0';

    printf("Donner la chaine 2 : ");
    fgets(chaine2,MAX_TAILLE,stdin);
    chaine2[strcspn(chaine2, "\n")]='\0';

    

    printf("la concatination est:%s\n",strcat(chaine1,chaine2));

    return 0;
}
