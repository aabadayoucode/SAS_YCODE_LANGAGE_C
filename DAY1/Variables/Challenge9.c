#include <stdio.h>
#include <math.h>

int main () {

    int X1,X2,Y1,Y2,Z1,Z2;
    float Distance;

    printf("donner X1 :");
    scanf("%d",&X1);
    
    printf("donner X2 :");
    scanf("%d",&X2);
    
    printf("donner Y1 :");
    scanf("%d",&Y1);
    
    printf("donner Y2 :");
    scanf("%d",&Y2);

    printf("donner Z1 :");
    scanf("%d",&Z1);
    
    printf("donner Z2 :");
    scanf("%d",&Z2);

    Distance = sqrt(pow(X2-X1,2) + pow(Z2-Z1,2) + pow(Y2-Y1,2));

    printf("la Distance est : %.2f ",Distance);

    return 0;
}