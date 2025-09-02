#include <stdio.h>
#include <math.h>

int main () {

    
    double Moy,a,b,c;

    printf("donner a :");
    scanf("%lf",&a);

    printf("donner b :");
    scanf("%lf",&b);

    printf("donner c :");
    scanf("%lf",&c);

    Moy = pow(a * b * c,1.0/3.0);
    
    printf("La moyenne geometrique de %.2lf et %.2lf et %.2lf est : %.2lf",a,b,c,Moy);
    return 0;
}