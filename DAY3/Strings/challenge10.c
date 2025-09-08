/*

Écrivez un programme C qui lit une chaine de caractères principale et une sous-chaine, 
puis vérifie si la sous-chaine est présente dans la chaine principale. 
Affichez un message indiquant si la sous-chaine est trouvee ou non.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char sousChaine[50];

    printf("Donner la chaine principale : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';   

    printf("Donner la sous-chaine à rechercher : ");
    fgets(sousChaine, sizeof(sousChaine), stdin);
    sousChaine[strcspn(sousChaine, "\n")] = '\0'; 

   
    if (strstr(chaine, sousChaine) != NULL) {
        printf("La sous-chaine \"%s\" est trouvee dans la chaine principale.\n", sousChaine);
    } else {
        printf("La sous-chaine \"%s\" n\'est pas trouvee.\n", sousChaine);
    }

    return 0;
}
