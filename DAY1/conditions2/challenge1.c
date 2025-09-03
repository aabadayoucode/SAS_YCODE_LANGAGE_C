#include <stdio.h>

int main() {
    float revenu_annuel;
    int score_credit;
    int duree_pret;

    printf("Entrez le revenu annuel: ");
    scanf("%f", &revenu_annuel);
    printf("Entrez le score de credit  : ");
    scanf("%d", &score_credit);
    printf("Entrez la dure du pret: ");
    scanf("%d", &duree_pret);

    if (revenu_annuel >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Vous êtes éligible pour le pret.\n");
    } else if (revenu_annuel >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Vous etes eligible pour le pret avec conditions.\n");
    } else {
        printf("Vous n etes pas eligible pour le pret.\n");
    }

    return 0;
}
