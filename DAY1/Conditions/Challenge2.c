#include <stdio.h>

int main (){

    char ct;

    printf("donneer un caractere : ");
    scanf("%c",&ct);
 
       /* les  voyelles: a, e, i, o, u, y */

    switch (ct)
    {
    case 'a':
        printf("est une voyelle");
        break;
    case 'e':
        printf("est une voyelle");
        break;
    case 'i':
        printf("est une voyelle");
        break;
    case 'o':
        printf("est une voyelle");
        break;
    case 'u':
        printf("est une voyelle");
        break;
    case 'y':
        printf("est une voyelle");
        break;
    
    default:
        printf("c'est pas une voyelle");
        break;
    }
    return 0;


}