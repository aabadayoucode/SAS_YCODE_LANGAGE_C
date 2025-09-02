#include <stdio.h>

int main (){

    double temperateurEnC,K;

    printf("donner la temperateur en celsius :");
    scanf("%f",&temperateurEnC);
    K = temperateurEnC + 273.15;
    printf("La temperateur en kelvin est : %.3f",K);


    return 0;
}