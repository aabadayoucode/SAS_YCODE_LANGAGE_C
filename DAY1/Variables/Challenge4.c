#include <stdio.h>

int main (){

    int VitasseEnKH;
    double V;

    printf("donner la Vitasse en kilometre par heure :");
    scanf("%d",&VitasseEnKH);
    V = VitasseEnKH * 0.27778;
    printf("Vitasse en M/S : %.3f",V);


    return 0;
}