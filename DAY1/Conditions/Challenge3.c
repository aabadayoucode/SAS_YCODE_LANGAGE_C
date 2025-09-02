#include <stdio.h>

int main() {
    int a, b, somme;


    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);


    if (a == b) {
        somme = (a + b)*3;
        printf("Le triple de leur somme est : %d\n", somme);
    } else {
        somme = a + b;
        printf("La somme des deux valeurs est : %d\n", somme);
    }

    return 0;
}
