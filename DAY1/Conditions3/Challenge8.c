
#include <stdio.h>

int main() {
    float moyenne;

    printf("Entrez la moyenne de l'eleve : ");
    scanf("%f", &moyenne);

    if (moyenne >= 0 && moyenne < 10) {
        printf("L'eleve est recale");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("L'eleve obtient la mention passable");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("L'eleve obtient la mention assez bien");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("L'eleve obtient la mention bien");
    } else if (moyenne >= 16 && moyenne ==20)
    {
        printf("L'eleve obtient la mention très bien");
    }else
     {
        printf("il faut donner une note entre 0 et 20");
    }

    return 0;
}
