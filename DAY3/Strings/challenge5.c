/*
Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. 
Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".
*/


#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[50];



    printf("Donner la chaine 1 : ");
    fgets(chaine1,50,stdin);
    chaine1[strcspn(chaine1, "\n")]='\0';

    printf("inverse: ");
    for (int i = strlen(chaine1)-1; i >= 0; i--)
    {
        printf("%c",chaine1[i]);
    }
    
    

    return 0;
}




