/*

Écrivez un programme C pour déterminer le plan de retraite en fonction de :

Âge
Années de cotisation
Montant total épargné (en euros)
Les plans sont :

Âge >= 65 ans et Années de cotisation >= 30 ans et Montant >= 100 000 € : Plan complet avec pension élevée
Âge >= 65 ans et Années de cotisation >= 20 ans et Montant >= 50 000 € : Plan partiel avec pension moyenne
Âge < 65 ans : Plan épargne non encore disponible
Ajoutez un bonus de 5% pour chaque tranche de 10 000 € au-delà de 50 000 € épargnés.
 
*/


#include <stdio.h>
int main (){

    int age, annee_cotisation;
    float montant_total_epargne ,bonus=0.0;

    printf("donner votre age :");
    scanf("%d",&age);

    printf("donner votre Annees de cotisation :");
    scanf("%d",&annee_cotisation);

    printf("donner votre Montant total epargne :");
    scanf("%f",&montant_total_epargne);

    if (montant_total_epargne >= 50000)
    {
        int tranche = (montant_total_epargne - 50000)/10000;
        float taux_bonus = tranche * 0.05 ;
        bonus = taux_bonus * montant_total_epargne ;
    }
    

    if (age >= 65 && annee_cotisation >= 30 && montant_total_epargne >= 100000)
    {
        printf("Plan complet avec pension elevee \n");

    }else if (age >= 65 && annee_cotisation >= 20 && montant_total_epargne >= 50000){

        printf("Plan partiel avec pension moyenne \n");

    }else{

        printf("Plan épargne non encore disponible \n");

    }

    if (bonus > 0 )
    {
        printf("Votre bonus est : %.2f",bonus);
    }
    
    return 0;
}