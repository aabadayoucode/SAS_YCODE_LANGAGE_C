#include <stdio.h>

int main (){

    double DistanceEnK,DistanceEnY,D;

    printf("donner la Distance en kilometre :");
    scanf("%f",&DistanceEnK);
    D = DistanceEnK + 1093.61;
    printf("La distance en yards : %.3f",D);


    return 0;
}