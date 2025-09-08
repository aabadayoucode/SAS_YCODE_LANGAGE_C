/*

Challenge 5 : Structure et Fonction de Retour
Écrivez un programme C qui définit une structure pour représenter un livre avec les champs titre, auteur, et année. 
Écrivez une fonction qui retourne une variable de cette structure initialisée avec des valeurs données. 
Affichez les informations du livre dans le programme principal.
*/


#include <stdio.h>
#include <string.h>


struct Livre
{
    char titre[50];
    char auteur[50];
    int annee;

};


struct Livre retourLiver(){

    struct Livre L1;
 
    printf("Donner le titre: ");
    fgets(L1.titre,50,stdin);
    L1.titre[strcspn(L1.titre,"\n")]='\0';

    printf("Donner l'auteur: ");
    fgets(L1.auteur,50,stdin);
    L1.auteur[strcspn(L1.auteur,"\n")]='\0';


    printf("Donner l'annee: ");
    scanf("%d",&L1.annee);
    getchar();

    return L1;

}


int main () {
        struct Livre L1;


    L1 = retourLiver();

    printf("le titre est: %s ",L1.titre);
    printf("l'auetur est: %s ",L1.auteur);
    printf("l'annee est: %d ",L1.annee);


        
    
    return 0;
}