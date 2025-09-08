/*
Écrivez un programme C qui lit une chaîne de caractères et un caractère, 
puis compte et affiche combien de fois le caractère apparaît dans la chaîne.
*/


#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[50];
    int cmp =0;



    printf("Donner la chaine 1 : ");
    fgets(chaine1,50,stdin);
    chaine1[strcspn(chaine1, "\n")]='\0';

    printf("inverse: ");
    for (int i =0;i<= strlen(chaine1)-1; i++)
    {
        cmp +=1;
       
    }
    printf("la taille est: %d",cmp);
    
    return 0;
}




