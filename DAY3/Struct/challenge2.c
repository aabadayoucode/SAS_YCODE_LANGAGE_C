/*


*Challenge 2 : Structure avec Tableau
Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom, prenom, et un tableau d'entiers pour stocker les notes. 
Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.
*/


#include <stdio.h>
#include <string.h>


struct Etudiant
{
    char nom[50], prenom[50];
    int notes[3];
};


int main () {
    struct Etudiant E1[2];

    for (int i = 0; i < 2 ; i++)
    {
        printf("Donner le nom du etudiant numero %d :",i+1);
        fgets(E1[i].nom,50,stdin);
        E1[i].nom[strcspn(E1[i].nom, "\n")] = '\0';

        printf("Donner le prenom du etudiant numero %d :",i+1);
        fgets(E1[i].prenom,50,stdin);
        E1[i].prenom[strcspn(E1[i].prenom, "\n")] = '\0';

        for (int j = 0; j < 3; j++)
        {
            printf("Donner le note %d du etudiant numero %d :",j+1,i+1);
            scanf("%d",&E1[i].notes[j]);
        }
        getchar();
        
        
    }
    
    for (int i = 0; i < 2 ; i++)
    {
        printf("le nom : %s le prenom: %s  \n",E1[i].nom,E1[i].prenom);

        for (int j = 0; j < 3; j++)
        {
            printf("la note %d: %d \n",j+1,E1[i].notes[j]);
        }
        
        
    }
    
    

    return 0;
}