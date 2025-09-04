#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 50
#define MAX_STR 100



int main() {
    char titre[MAX_BOOKS][MAX_STR];
    char auteur[MAX_BOOKS][MAX_STR];
    float prix[MAX_BOOKS];
    int quantite[MAX_BOOKS];
    int choix = 0;
    int cmp = 0;

    
void ajouterLivre(char titre[][MAX_STR], char auteur[][MAX_STR], float prix[], int quantite[], int cmp) {
    printf("Titre du livre: ");
    fgets(titre[cmp], MAX_STR, stdin);
    titre[cmp][strcspn(titre[cmp], "\n")] = 0; 

    printf("Auteur du livre: ");
    fgets(auteur[cmp], MAX_STR, stdin);
    auteur[cmp][strcspn(auteur[cmp], "\n")] = 0;

    printf("Prix du livre: ");
    scanf("%f", &prix[cmp]);

    printf("Quantite du livre: ");
    scanf("%d", &quantite[cmp]);
    getchar();

    cmp+=1;
}

void afficherLivres(char titre[][MAX_STR], char auteur[][MAX_STR], float prix[], int quantite[], int cmp) {
    printf("\n------- Liste des livres -------\n");
    for (int i = 0; i < cmp; i++) {
        printf("Titre: %s , Auteur: %s , Prix: %.0f , Quantite: %d \n", titre[i], auteur[i], prix[i], quantite[i]);
    }

}

void rechercherLivre(char titre[][MAX_STR], char auteur[][MAX_STR], float prix[], int quantite[], int cmp) {
    char searcht[MAX_STR];
    printf("Titre du livre a rechercher: ");
    fgets(searcht, MAX_STR, stdin);
    searcht[strcspn(searcht, "\n")] = 0;

    for (int i = 0; i < cmp; i++) {
        if (strcmp(searcht, titre[i]) == 0) {
            printf("Trouve! Titre: %s  Auteur: %s  Prix: %.2f  Quantite: %d\n", titre[i], auteur[i], prix[i], quantite[i]);
            return;
        }
    }
}

void mettreAJourQuantite(char titre[][MAX_STR], int quantite[], int cmp) {
    char searcht[MAX_STR];
    printf("Titre du livre a mettre a jour: ");
    fgets(searcht, MAX_STR, stdin);
    searcht[strcspn(searcht, "\n")] = 0;

    for (int i = 0; i < cmp; i++) {
        if (strcmp(searcht, titre[i]) == 0) {
            int new_quantite;
            printf("Nouvelle quantite: ");
            scanf("%d", &new_quantite);
            getchar();
            quantite[i] = new_quantite;
            printf("Quantite mise a jour avec succes.\n");
            return;
        }
    }
    printf("Livre non trouve.\n");
}

void supprimerLivre(char titre[][MAX_STR], char auteur[][MAX_STR], float prix[], int quantite[], int *cmp) {
    char suppreme[MAX_STR];
    printf("Titre du livre a supprimer: ");
    fgets(suppreme, MAX_STR, stdin);
    suppreme[strcspn(suppreme, "\n")] = 0;

    for (int i = 0; i < *cmp; i++) {
        if (strcmp(suppreme, titre[i]) == 0) {
            for (int j = i; j < *cmp - 1; j++) {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
            }
            (*cmp)--;
            printf("Livre supprime avec succes.\n");
            return;
        }
    }
    printf("Livre non trouve.\n");
}

void afficherNombreLivres(int cmp) {
    printf("Nombre total de livres %d\n", cmp);
}


    do {
        printf("\n==== MENU ====n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        getchar(); 

        switch (choix) {
            case 1: ajouterLivre(titre, auteur, prix, quantite, &cmp); 
                break;
            case 2: afficherLivres(titre, auteur, prix, quantite, cmp); 
                break;
            case 3: rechercherLivre(titre, auteur, prix, quantite, cmp); 
                break;
            case 4: mettreAJourQuantite(titre, quantite, cmp); 
                break;
            case 5: supprimerLivre(titre, auteur, prix, quantite, &cmp); 
                break;
            case 6: afficherNombreLivres(cmp); 
                break;
            case 0: printf("Au revoir!\n"); 
                break;
            default: printf("Choix invalide!\n");
        }
    } while (choix != 0);

    return 0;
}

