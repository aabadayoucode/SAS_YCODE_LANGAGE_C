/*
# Mini-Projet : Système de Gestion de Stock dans une Librairie
## Objectif
Le projet consiste à créer un programme en C qui permet de gérer le stock de livres dans une librairie. Le programme doit offrir les fonctionnalités suivantes :
1. Ajouter un livre au stock.
2. Afficher tous les livres disponibles.
3. Rechercher un livre par son titre.
4. Mettre à jour la quantité d'un livre.
5. Supprimer un livre du stock.
6. Afficher le nombre total de livres en stock.

## Détails du Projet

### 1. Ajouter un Livre au Stock
- Le programme demande les informations suivantes pour chaque livre :
  - Titre du livre.
  - Auteur du livre.
  - Prix du livre.
  - Quantité en stock.
- Les informations sont stockées dans des tableaux distincts pour chaque attribut (titre, auteur, prix, quantité).

### 2. Afficher Tous les Livres Disponibles
- Le programme parcourt les tableaux et affiche les détails de chaque livre (titre, auteur, prix, quantité).

### 3. Mettre à Jour la Quantité d'un Livre
- Le programme permet de modifier la quantité en stock pour un livre donné.
- L'utilisateur spécifie le titre du livre et la nouvelle quantité.

### 4. Supprimer un Livre du Stock
- Le programme permet de supprimer un livre du stock en fonction de son titre.
- Après la suppression, le livre n'apparaît plus dans la liste des livres disponibles.

### 5. Afficher le Nombre Total de Livres en Stock
- Le programme calcule et affiche le nombre total de livres en stock, en additionnant les quantités de tous les livres.

## Fonctionnalités Requises
- **Variables** : Pour stocker les informations des livres (titre, auteur, prix, quantité).
- **Conditions** : Pour rechercher un livre, mettre à jour la quantité, et supprimer un livre.
- **Boucles** : Pour parcourir les livres et afficher leurs détails.
- **Tableaux** : Pour stocker plusieurs attributs des livres.
*/

#include <stdio.h>
#include <string.h>

#define Ttaille 5
#define NbrChain 50

int main()
{

    int nombre;
    char titres[Ttaille][NbrChain];
    char auteurs[Ttaille][NbrChain];
    float prixs[Ttaille];
    int quentites[Ttaille];
    int nbrLivre = 0;

    do
    {

        printf("==== menu ====");
        printf("1. Ajouter un livre au stock \n");
        printf("2. Afficher tous les livres disponibles \n");
        printf("3. Rechercher un livre par son titre \n");
        printf("4. Mettre a jour la quantite dun livre \n");
        printf("5. Supprimer un livre du stock \n");
        printf("6. Afficher le nombre total de livres en stock \n");
        printf("7. quiter \n");

        printf("Choise un nombre : ");
        scanf("%d", &nombre);
        getchar();

        switch (nombre)
        {
        case 1:
            if (nbrLivre == Ttaille)
            {
                printf("Le stock est plien \n");
            }
            else
            {
                printf("Donner le titre du livre : ");
                fgets(titres[nbrLivre], NbrChain, stdin);
                titres[nbrLivre][strcspn(titres[nbrLivre], "\n")] = '\0';

                printf("Donner l'auteur du livre : ");
                fgets(auteurs[nbrLivre], NbrChain, stdin);
                auteurs[nbrLivre][strcspn(auteurs[nbrLivre], "\n")] = '\0';

                printf("Donner le prix du livre : ");
                scanf("%f", &prixs[nbrLivre]);
                getchar();

                printf("Donner la quantite du livre : ");
                scanf("%d", &quentites[nbrLivre]);
                getchar();

                nbrLivre += 1;
            }

            break;
        case 2:
            if (nbrLivre == 0)
            {
                printf("pas des livre !");
            }
            else
            {
                printf("\n-----la liste des livres : \n");
                for (int i = 0; i < nbrLivre; i++)
                {
                    printf("%d: ", i + 1);
                    printf("le titre :%s ", titres[i]);
                    printf("l\'auteur :%s ", auteurs[i]);
                    printf("le prix :%.0f DH ", prixs[i]);
                    printf("la quentites :%d ", quentites[i]);
                    printf("\n");
                };
                printf("------------------------\n");
            }
            break;

        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            printf("")

                break;
        case 7:
            printf(" Au revoir !");
            break;
        default:
            printf("\n Il faut donner une valeur entre 1 et 7 ! \n ");
            break;
        }

    } while (nombre != 7);

    return 0;
}