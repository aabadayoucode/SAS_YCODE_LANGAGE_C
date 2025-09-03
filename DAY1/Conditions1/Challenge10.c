#include <stdio.h>

int main(){

    int jour, Le_mois, annee;
    char *Les_mois[]= {" ","Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Decembre"};

    printf("donner moi la date en forma JJ/MM/AAAA: ");
    scanf("%d/%d/%d",&jour, &Le_mois, &annee);

    printf("La date est : %d/%s/%d",jour,Les_mois[Le_mois],annee);
    return 0;
}