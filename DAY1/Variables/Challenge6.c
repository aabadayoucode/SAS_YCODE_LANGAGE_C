#include <stdio.h>

int main () {

    float a,b;

    printf("donner a :");
    scanf("%f",&a);

    printf("donner b :");
    scanf("%f",&b);

    printf("la somme est : %.2f \n la soustraction est : %.2f \n la multiplication est : %.2f \n la division est : %.2f",a+b,a-b,a*b,a/b);
    return 0;
}