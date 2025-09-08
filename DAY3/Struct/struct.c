#include <stdio.h>
#include <string.h>


struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    // Déclaration d'une variable de type struct Personne
    struct Personne p;

    // Affectation des valeurs aux champs
    strcpy(p.nom, "Dupont");    // on utilise strcpy car ce sont des chaînes
    strcpy(p.prenom, "Jean");
    p.age = 30;

    // Affichage des valeurs
    printf("Nom    : %s\n", p.nom);
    printf("Prénom : %s\n", p.prenom);
    printf("Âge    : %d ans\n", p.age);

    return 0;
}
