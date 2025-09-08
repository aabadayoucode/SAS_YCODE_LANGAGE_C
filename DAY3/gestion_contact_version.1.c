#include <stdio.h>
#include <string.h>

#define MAX_TAILLE 50

void listeChoix() {
    printf("=========menu========= \n");
    printf("1. Ajouter un Contact \n");
    printf("2. Modifier un Contact \n");
    printf("3. Supprimer un Contact \n");
    printf("4. Afficher Tous les Contacts \n");
    printf("5. Rechercher un Contact \n");
    printf("6. Quiter le programme. \n");
    printf("=========menu========= \n");
    printf("Donner votre choix: ");
}

struct Contact {
    char Nomes[MAX_TAILLE];
    int NumT;
    char AdrEmail[MAX_TAILLE];
};

int ajouterContact(struct Contact contacts[], int nbrContact){
    if (nbrContact == MAX_TAILLE) {

        printf("Le carnet de contacts est plein!! \n");

        return nbrContact;

    } else {
        struct Contact contact1;

        printf("Donner le nom: ");
        fgets(contact1.Nomes, MAX_TAILLE, stdin);
        contact1.Nomes[strcspn(contact1.Nomes, "\n")] = '\0';

        printf("Donner l'adresse email: ");
        fgets(contact1.AdrEmail, MAX_TAILLE, stdin);
        contact1.AdrEmail[strcspn(contact1.AdrEmail, "\n")] = '\0';

        printf("Donner le numero du telephone: ");
        scanf("%d", &contact1.NumT);
        getchar(); 
        
        contacts[nbrContact] = contact1;
        printf("Le contact a ete ajoute avec succes!! \n");
        return nbrContact + 1;
    }
}


void modifierContact(struct Contact contacts[],int nbrContact){

    char ContacRechercher[MAX_TAILLE];
    int choixM;
    char NouveauAdrEmail[MAX_TAILLE];
    int NouveauNumero;

    printf("Donner le nom du contact: ");
    fgets(ContacRechercher,MAX_TAILLE,stdin);
    ContacRechercher[strcspn(ContacRechercher,"\n")]='\0';


    for (int i = 0; i < nbrContact; i++)
    {
        if (strcmp(ContacRechercher,contacts[i].Nomes)==0)
    {
        printf("le nom: %s email: %s tel: %d \n",contacts[i].Nomes,contacts[i].AdrEmail,contacts[i].NumT);
        printf("1. Pour modifier l'\adresse email \n");
        printf("2. Pour modifier le numero \n");

        printf("Donner votre choix: ");
        scanf("%d",&choixM);
        getchar();

        switch (choixM)
        {
        case 1:

            printf("Donner le neveau adresse email: ");
            fgets(NouveauAdrEmail,MAX_TAILLE,stdin);
            NouveauAdrEmail[strcspn(NouveauAdrEmail,"\n")]='\0';

            strcpy(contacts[i].AdrEmail,NouveauAdrEmail);

            printf("l'\adresse email du contact a ete modifier avec succes ! \n");
            break;
        case 2:
            printf("Donner le nouveau numero du telephone: ");
            scanf("%d",&NouveauNumero);

            contacts[i].NumT=NouveauNumero;

            printf("le numero du contact a ete modifier avec succes ! \n");
            break;
        default:
            printf("Donner un choix entre 1 et 2 !! \n");
            break;
        }
    }else{
        printf("Aucun contact avce ce nom !! \n");
    }
    }
    
}
int supprimerContact(struct Contact Contacts[], int nbrContact) {
    char contactSupprimer[MAX_TAILLE];

    printf("Donner le nom du contact que vous voulez supprimer: ");
    fgets(contactSupprimer, MAX_TAILLE, stdin);
    contactSupprimer[strcspn(contactSupprimer, "\n")] = '\0';

    for (int i = 0; i < nbrContact; i++) {
        if (strcmp(Contacts[i].Nomes, contactSupprimer) == 0) {
            for (int j = i; j < nbrContact - 1; j++) {
                strcpy(Contacts[j].Nomes, Contacts[j + 1].Nomes);
                strcpy(Contacts[j].AdrEmail, Contacts[j + 1].AdrEmail);
                Contacts[j].NumT = Contacts[j + 1].NumT;
            }
            nbrContact -= 1;
            printf("Le contact a ete supprimer avec succes !! \n");
            return nbrContact;
        }
    }
    printf("Aucun contact avec ce nom !! \n");
    return nbrContact;
}

void afficherContacts(struct Contact Contacts[], int nbrContact){
    printf("\n=========liste des contacts=======\n");
    for (int i = 0; i < nbrContact; i++)
    {
        printf("%d: le nom: %s email: %s tel: %d \n",i+1,Contacts[i].Nomes,Contacts[i].AdrEmail,Contacts[i].NumT);
    }
    printf("\n=========Fin de liste=======\n");
}

void chercherContact(struct Contact Contacts[], int nbrContact) {
    char nomCherche[MAX_TAILLE];
    int trouve = 0;
    printf("Donner le nom du contact : ");
    fgets(nomCherche, MAX_TAILLE, stdin);
    nomCherche[strcspn(nomCherche, "\n")] = '\0';

    for (int i = 0; i < nbrContact; i++) {
        if (strcmp(Contacts[i].Nomes, nomCherche) == 0) {
            printf("%d: le nom: %s email: %s tel: %d \n", i + 1, Contacts[i].Nomes, Contacts[i].AdrEmail, Contacts[i].NumT);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun contact avec ce nom !! \n");
    }
}


int main() {
    int choix, nbrContact = 0;
    struct Contact contacts[MAX_TAILLE];

    do {
        listeChoix();
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1:
                nbrContact = ajouterContact(contacts, nbrContact);
                break;
            case 2:
                modifierContact(contacts, nbrContact);
                break;
            case 3:
                nbrContact = supprimerContact(contacts,nbrContact);
                break;
            case 4:
                afficherContacts(contacts, nbrContact);
                break;
            case 5:
                chercherContact(contacts, nbrContact);
                break;
            case 6:
                printf("Au revoir !! \n");
                break;
            default:
                printf("Donner un choix entre 1 et 6 \n");
                break;
        }
    } while (choix != 6);

    return 0;
}


