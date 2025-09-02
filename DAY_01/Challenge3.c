#include <stdio.h>

int main (){

    int DistanceEnK;
    double D;

    printf("donner la Distance en kilometre :");
    scanf("%d",&DistanceEnK);
    D = DistanceEnK * 1093.61;
    printf("La distance en yards : %.3f",D);


    return 0;
}