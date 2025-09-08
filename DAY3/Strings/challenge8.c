/*
Challenge 7 : Conversion en Majuscules
Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères en minuscules. Affichez la chaîne modifiée.
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chaine1[50];
    char Majuscule[50];



    printf("Donner la chaine 1 : ");
    fgets(chaine1,50,stdin);
    chaine1[strcspn(chaine1, "\n")]='\0';

    for (int i = 0; chaine1[i] != '\0'; i++)
    {
        Majuscule[i]=tolower((unsigned char)chaine1[i]);
    }
        
    printf("la chaine orijinal est: %s\n",chaine1);
    printf("la chaine majuscule est: %s",Majuscule);
    
    return 0;
}




