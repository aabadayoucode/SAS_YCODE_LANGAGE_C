#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 50
int main()
{
    char titre[MAX_BOOKS][MAX_BOOKS];
    char auteur[MAX_BOOKS][MAX_BOOKS];
    float prix[MAX_BOOKS];
    int quantite[MAX_BOOKS];
    int choix = 0;
    int cmp = 0;
    char searcht[MAX_BOOKS];

    void ajouterLiver()
    {
        printf("Titre du livre: ");
        getchar();
        fgets(titre[cmp], sizeof(titre), stdin);

        printf("Auteur du livre: ");
        getchar();
        fgets(auteur[cmp], sizeof(auteur), stdin);

        printf("Prix du livre: ");
        getchar();
        scanf("%f", &prix[cmp]);

        printf("Qauntite du livre: ");
        getchar();
        scanf("%d", &quantite[cmp]);

        cmp+=1;
    }

    void afficherLivers()
    {
        printf("-------Liste des livres---------\n");

        for (int i = 0; i < cmp; i++)
        {
            printf("titre de livre : %s , nom de l'auteur : %s , le prix : %.1f , le quantite : %d \n", titre[i], auteur[i], prix[i], quantite[i]);
        }

        printf("-------fin de liste---------\n");
    }

    void rechercheLiver()
    {

        printf("Titre du livre: ");
        getchar();
        fgets(searcht, sizeof(searcht), stdin);

        for (int i = 0; i < cmp; i++)
        {
            if (strcmp(searcht, titre[i]) == 0)
            {
                printf("titre de livre : %s , nom de l'auteur : %s , le prix : %.1f , le quantite : %d \n", titre[i], auteur[i], prix[i], quantite[i]);
            }
        }
    }

    void meetreAjourQuantite()
    {

        printf("Titre du livre: ");
        getchar();
        fgets(searcht, sizeof(searcht), stdin);
        for (int i = 0; i < cmp; i++)
        {
            if (strcmp(searcht, titre[i]) == 0)
            {
                int new_quantite;
                printf("saisirez la nouvelle Qauntite: "); 
                scanf("%d", &new_quantite);
                quantite[i] = new_quantite;
            }
        }
    }
    void supprimerLiver()
    {
        char suppreme[MAX_BOOKS];
        printf("Titre du livre: ");
        getchar();
        fgets(suppreme, sizeof(suppreme), stdin);

        for (int i = 0; i < cmp; i++)
        {
            if (strcmp(suppreme, titre[i]) == 0)
            {
                for (int j = i; j < cmp; j++)
                {
                    strcpy(titre[j], titre[j + 1]);
                    strcpy(auteur[j], auteur[j + 1]);
                    prix[j] = prix[j + 1];
                    quantite[j] = quantite[j + 1];
                }
                cmp-=1;
                break;
            }
        }
    }

    void afficherNombreLiverEnStock()
    {
        printf("le nombre des livers en stock est : %d", &cmp);
    }
    do
    {

        printf("-------menu---------\n");
        printf("1 Ajouter un livre au stock.\n");
        printf("2 Afficher tous les livres disponibles.\n");
        printf("3 Rechercher un livre par son titre.\n");
        printf("4 Mettre à jour la quantité d'un livre.\n");
        printf("5 Supprimer un livre du stock.\n");
        printf("6 Afficher le nombre total de livres en stock.\n");
        printf("Donner un choix: ");
        scanf("%d", &choix);

        switch (choix)

        {

        case 1:
            ajouterLiver();
            break;

        case 2:
            afficherLivers();
            break;
        case 3:
            rechercheLiver();
            break;
        case 4:
            meetreAjourQuantite();
            break;

        case 5:
            supprimerLiver();
            break;

        case 6:
            afficherNombreLiverEnStock();
            break;

        default:
            printf("Il faut donner un choix entre 1 et 6 ! ");
        }
    } while (choix != 0);
}