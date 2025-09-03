/*
Écrivez un programme C qui recherche un élément spécifique dans un tableau d'entiers en utilisant une recherche linéaire. 
Le programme doit demander à l'utilisateur:

- le nombre d'éléments, 
- les éléments du tableau, 
- et l'élément à rechercher,
puis afficher si l'élément est présent ou non.
*/

#include <stdio.h>
int main (){

    int nbrEl, EleR;

    printf("donner le nombre des elemnets : ");
    scanf("%d",&nbrEl);

    int tab[nbrEl];
    for (int i = 0; i < nbrEl ; i++)
    {
        printf("donner le nombre %d : ",i+1);
        scanf("%d",&tab[i]);
    }

    printf("donner element recherche  : ");
    scanf("%d",&EleR);

    for (int i = 0; i < nbrEl; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");

    int exist = 0;

    for (int i = 0; i < nbrEl; i++)
    {
        if (EleR == tab[i])
        {
           exist = 1;
        }
        
    }
    
    if (exist == 1 )
    {
        printf("exist");
    }else {
        printf("n exist pas ");
    }
    
    
    return 0;
}