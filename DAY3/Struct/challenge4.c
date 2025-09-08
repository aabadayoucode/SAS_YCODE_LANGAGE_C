/*

Challenge 4 : Structure avec Pointeurs
Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs x et y. 
Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. Affichez les valeurs du point.

*/


#include <stdio.h>
#include <string.h>


struct Point
{
    int x;
    int y;

};



int main () {

    struct Rectangle P1;

    printf("Donner x: ");
    scanf("%d",&P1.x);
    getchar();

    printf("Donner y: ");
    scanf("%d",&P1.y);
    getchar();
        
    printf("L'aire de Rectangle est: %d",calculerAire(P1));
    return 0;
}

int main() {
    struct Point *p;        // Déclaration d’un pointeur sur Point
    struct Point point1;    // Variable de type Point
    p = &point1;            // Le pointeur p pointe vers point1

    // Lecture des coordonnées via le pointeur
    printf("Donner x: ");
    scanf("%d", &p->x);   // équivalent à point1.x

    printf("Donner y: ");
    scanf("%d", &p->y);   // équivalent à point1.y

    // Affichage via le pointeur
    printf("Le point a pour coordonnées: (%d , %d)\n", p->x, p->y);

    return 0;
}
