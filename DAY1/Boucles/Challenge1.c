/*

Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table de multiplication de 1 à 10. Par exemple, pour le nombre 4, affichez :

4 * 1 = 4 4 * 2 = 8 4 * 3 = 12 ... 4 * 10 = 40

*/


#include <stdio.h>

int main() {

    int nbr;
    printf("donner un nombre :");
    scanf("%d",&nbr);

    for(int i = 1 ; i <= 10 ; i++  ){

        printf(" %d X %d = %d \n", nbr, i, i*nbr);
    }

    return 0;
}