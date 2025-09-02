#include <stdio.h>

int main () {

    int a,b,c;
    float Moy;

    printf("donner a :");
    scanf("%d",&a);

    printf("donner b :");
    scanf("%d",&b);

    printf("donner c :");
    scanf("%d",&c);

    Moy = (a*2 + b*3 + c*5)/10;
    
    printf("La moyenne de %d et %d et %d est : %.2f",a,b,c,Moy);
    return 0;
}