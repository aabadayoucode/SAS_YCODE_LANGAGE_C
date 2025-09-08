#include <stdio.h>
#include <string.h>
#define MAX_T 3

struct Contact
{
    char Nom[50];
    int Tele;
    char email[50];
};

int Menu()
{

    int ch;
    printf("\n========Menu========\n");
    printf("1. Ajouter un Contact \n");
    printf("2. Modifier un Contact \n");
    printf("3. Supprimer un Contact \n");
    printf("4. Afficher Tous les Contacts \n");
    printf("5. Rechercher un Contact \n");
    printf("6. Quiter");
    printf("\n========Menu========\n");
    printf("Donner votre choix: ");
    scanf("%d", &ch);
    getchar();
    return ch;
}

int ajouterContact(struct Contact Contacts[], int nbrContact)
{

    if (nbrContact == MAX_T)
    {
        printf("Le carnet est plien !");
        return nbrContact;
    }
    else
    {

        printf("Donner le nom: ");
        fgets(Contacts[nbrContact].Nom, sizeof(Contacts[nbrContact].Nom), stdin);
        Contacts[nbrContact].Nom[strcspn(Contacts[nbrContact].Nom, "\n")] = '\0';

        printf("Donner le email: ");
        fgets(Contacts[nbrContact].email, sizeof(Contacts[nbrContact].email), stdin);
        Contacts[nbrContact].email[strcspn(Contacts[nbrContact].email, "\n")] = '\0';

        printf("Donner le tele: ");
        scanf("%d", &Contacts[nbrContact].Tele);
        getchar();

        printf("Le contact a ete ajouter avec succes !!");
        nbrContact += 1;

        return nbrContact;
    }
}

void modifierContact(struct Contact Contacts[], int nbrContact)
{
    char MotCherche[50],NouveauEmail[50];
    int exist = 0, indice, NouveauT ;


    printf("Donner le nom du contact: ");
    fgets(MotCherche, 50, stdin);
    MotCherche[strcspn(MotCherche, "\n")] = '\0';

    for (int i = 0; i < nbrContact; i++)
    {
        if (strcmp(MotCherche, Contacts[i].Nom) == 0)
        {
            indice = i;
            exist = 1;
            break;
        }
        
    }

    if (exist == 1)
        {

            printf("Donner le nouveau email: ");
            fgets(NouveauEmail,sizeof(NouveauEmail),stdin);
            NouveauEmail[strcspn(NouveauEmail,"\n")]='\0';

            printf("Donner le nouveau tel: ");
            scanf("%d",&NouveauT);
            getchar();

            strcpy(Contacts[indice].email,NouveauEmail);
            Contacts[indice].Tele = NouveauT;

            printf("La modification a ete fait succes ! \n");

        }
        else
        {
            printf("Aucun contact avce ce nom !! ");
        }


}

void afficherContact(struct Contact Contacts[], int nbrContact)
{

    if (nbrContact == 0)
    {
        printf("Le caret est vide !!");
    }
    else
    {
        for (int i = 0; i < nbrContact; i++)
        {
            printf("Nom: %s Email: %s Tel:%d \n", Contacts[i].Nom, Contacts[i].email, Contacts[i].Tele);
        }
    }
}

void rechercheContact(struct Contact Contacts[], int nbrContact)
{
    char MotCherche[50];
    int exist = 0, indice ;

    printf("Donner le nom du contact: ");
    fgets(MotCherche, 50, stdin);
    MotCherche[strcspn(MotCherche, "\n")] = '\0';

    for (int i = 0; i < nbrContact; i++)
    {
        if (strcmp(MotCherche, Contacts[i].Nom) == 0)
        {
            indice = i;
            exist = 1;
            break;
        }
       
    }

    if (exist == 1)
        {
            printf("Nom: %s Email: %s Tel:%d \n", Contacts[indice].Nom, Contacts[indice].email, Contacts[indice].Tele);
        }
        else
        {
            printf("Aucun contact avce ce nom !! ");
        }


}

int supprimerContact(struct Contact Contacts[], int nbrContact){
      
    char MotCherche[50];
    int exist = 0, indice ;

    printf("Donner le nom du contact: ");
    fgets(MotCherche, 50, stdin);
    MotCherche[strcspn(MotCherche, "\n")] = '\0';

    for (int i = 0; i < nbrContact; i++)
    {
        if (strcmp(MotCherche, Contacts[i].Nom) == 0)
        {
            indice = i;
            exist = 1;
            break;
        }
        
    }

    if (exist == 1)
        {
            for (int i = indice; i < nbrContact; i++)
            {
                Contacts[i]=Contacts[i+1];
            }
            printf("Le contact a ete supprimer avec succes!! ");

            nbrContact -=1;

            return nbrContact;

        }
        else
        {
            printf("Aucun contact avce ce nom !! ");
            return nbrContact;
        }

        return nbrContact;
}

int main()
{

    int choix;
    int nbrContact = 0;
    struct Contact Contacts[MAX_T];

    do
    {

        choix = Menu();

        switch (choix)
        {
        case 1:
            nbrContact = ajouterContact(Contacts, nbrContact);
            break;
        case 2:
            modifierContact(Contacts, nbrContact);
            break;
        case 3:
            nbrContact = supprimerContact(Contacts, nbrContact);
            break;
        case 4:
            afficherContact(Contacts, nbrContact);
            break;
        case 5:
            rechercheContact(Contacts, nbrContact);
            break;
        case 6:
            printf("Au revoir !");
            break;

        default:
            printf("Donner un choix entre 1 et 6 !");
            break;
        }

    } while (choix != 6);

    return 0;
}