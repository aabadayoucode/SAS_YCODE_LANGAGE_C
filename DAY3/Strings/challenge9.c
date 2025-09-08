/*
Challenge 9 : Suppression des Espaces
Écrivez un programme C qui lit une chaîne de caractères et supprime tous les espaces. Affichez la chaîne résultante.*/

#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[50];
    char Chaine[50];
    int j = 0;

    printf("Donner la chaine : ");
    fgets(chaine1, sizeof(chaine1), stdin);
    chaine1[strcspn(chaine1, "\n")] = '\0'; 

    for (int i = 0; i < sizeof(chaine1); i++)
    {
        if (chaine1[i] != ' ')
        {
            Chaine[j]=chaine1[i];
            j++;
        }
        
    }
    

    Chaine[j] = '\0'; 

    printf("La chaîne sans espaces est : %s\n", Chaine);

    return 0;
}
