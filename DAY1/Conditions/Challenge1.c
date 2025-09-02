#include <stdio.h>

int main (){

    int nbr;

    printf("donneer un nombre : ");
    scanf("%d",&nbr);

    if (nbr%2==0)
    {
        printf("le nombre et paire ");
    }
    else {
        printf("le nombre et impaire ");
    }
    return 0;
}