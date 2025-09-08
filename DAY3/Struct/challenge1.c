/*

Challenge 1 : Définition et Utilisation de Structure
Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age. 
Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.

*/


#include <stdio.h>
#include <string.h>


struct Personne
{
    char nom[50], prenom[50];
    int age;
};


int main () {
    struct Personne P1;

    strcpy(P1.nom,"ABADA");
    strcpy(P1.prenom,"AZIZ");
    P1.age=50;


    printf("le nom : %s le prenom: %s l'age: %d",P1.nom,P1.prenom,P1.age);
    

    return 0;
}