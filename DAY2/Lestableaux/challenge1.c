#include <stdio.h>
int main (){

    int taille;
   
    printf("donner la taille de table : ");
    scanf("%d",&taille);
    int tableau[taille];
    int max, min, somme;

    for(int i = 0 ; i <taille ; i++){

        printf("donner un nombre %d : ",i+1);
        scanf("%d",&tableau[i]);
    }

    min = tableau[0];
    max = tableau[0];
    somme = 0;

    for (int i = 0; i < taille ; i++)
    {
     if (min > tableau[i])
     {
        min = tableau[i];
     }

     if (max < tableau[i])
     {
        max = tableau[i];
     }
        somme += i ;
        printf("%d",tableau[i]);

    }
    
    printf("la somme : %d \n le max : %d \n le min : %d ",somme,max,min);


    return 0;
}