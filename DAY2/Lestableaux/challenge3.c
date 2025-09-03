#include <stdio.h>

int main () {

    int taille;

    printf("donner la taille du table : ");
    scanf("%d",&taille);

    int tab[taille];

    for (int i = 0; i < taille; i++)
    {
        printf("donner la valeur %d ",i+1);
        scanf("%d",&tab[i]);
    }

    for(int i = 0 ; i < taille ; i++){
        for (int j = i+1; j < taille; j++)
        {
           if (tab[i] < tab[j])
           {
             int var = tab[i];
            tab[i] = tab[j];
            tab[j] = var;
           }
           
        }
        

    }

    for (int i = 0; i < taille; i++)
    {
        printf("%d ",tab[i]);
    }
    
    return 0;
}