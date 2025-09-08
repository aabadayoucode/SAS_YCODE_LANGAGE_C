/*
Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non. 
Affichez un message indiquant si les chaînes sont égales ou différentes.
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

    if (strcmp(chaine1,chaine2)==0)
    {
        printf("Elle sont egales ! ");
    }else{
        printf("Elle ne sont pas egales ! ");
     
    }
    

    return 0;
}