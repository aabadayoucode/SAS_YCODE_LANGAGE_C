/*

Challenge 7 : Tableau en Ordre Croissant

Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers, 
puis affiche le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.

*/

#include <stdio.h>

int main(){

    int taille;
  
    printf("donner la taille de table: ");
    scanf("%d",&taille);
    int tab[taille];

    for (int i = 0; i < taille ; i++)
    {
        printf("donner la valeur %d : ",i+1);
        scanf("%d",&tab[i]);
        
    }


    for (int i = 0; i < taille ; i++)
    {
        for (int j = i+1; j < taille; j++)
        {
            if (tab[i]>tab[j])
            {
                int var = tab[j];
                tab[j] = tab[i];
                tab[i] = var;
            }
            
        }
        
    }

    for (int i = 0; i < taille; i++)
    {
       printf("%d ",tab[i]);
    }
    

    return 0;
}