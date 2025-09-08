/*

Challenge 3 : Passage de Structure en Argument
Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur. 
Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. 
Affichez l'aire dans le programme principal.

*/


#include <stdio.h>
#include <string.h>


struct Rectangle
{
    float longueur;
    float largeur;

};


float calculerAire(struct Rectangle R1){
 
    float aire;

    aire = R1.largeur * R1.longueur;

    return aire;

}


int main () {

    struct Rectangle R1;

    printf("Donner le largeur: ");
    scanf("%f",&R1.largeur);
    getchar();

    printf("Donner le longueur: ");
    scanf("%f",&R1.longueur);
    getchar();
        
    printf("L'aire de Rectangle est: %.2f",calculerAire(R1));
    return 0;
}