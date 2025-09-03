/*

Écrivez un programme C qui inverse les éléments d'un tableau d'entiers. 
Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. 
Affichez le tableau inversé.

*/

#include <stdio.h>
int main () {

    int taille;

    printf("donner la taille du table :");
    scanf("%d",&taille);

    int tab[taille];

    for (int i = 0; i < taille ; i++)
    {
        printf("donner la valeur %d : ",i+1);
        scanf("%d",&tab[i]);

    }

    for (int i = taille-1 ; i >=0 ; i--)
    {
        printf("%d",tab[i]);
    }
    
    
}