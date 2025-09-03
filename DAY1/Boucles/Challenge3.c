/*

Écrivez un programme C qui calcule la factorielle d'un nombre entier positif n entré par l’utilisateur. 
La factorielle de n est le produit de tous les entiers positifs inférieurs ou égaux à n. 
Par exemple, pour n = 5, affichez : 5! = 120.

*/


#include <stdio.h>

int main(){

    int n, fact = 1;

    printf("donner un nombre : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("il faut donner un nombre positif ");
    }

    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    
    printf("le fact : %d", fact);
    

    return 0;
}