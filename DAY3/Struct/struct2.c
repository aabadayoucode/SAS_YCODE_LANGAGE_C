#include <stdio.h>
#include <string.h>

#define MAX_T 50


struct Voiture
{
    char Marque[MAX_T];
    int Prix;
    char Matricule[MAX_T];
};



int main (){

    struct Voiture v;

    printf("Donner la marque: ");
    fgets(v.Marque,MAX_T,stdin);

    printf("Donner le prix: ");
    scanf("%d",&v.Prix);
    getchar();

    printf("Donner le matricule: ");
    fgets(v.Matricule,MAX_T,stdin);


    printf("la marque: %s", v.Marque);
    printf("le prix: %d DH \n", v.Prix);
    printf("la matricule: %s", v.Matricule);

    return 0;
}
