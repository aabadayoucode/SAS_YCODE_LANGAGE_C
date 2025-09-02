#include <stdio.h>

int main() {
    int nbr,invers;


    printf("donner le nombre :");
    scanf("%d",&nbr);


    int A = nbr / 1000;
    int B = (nbr/100)%10;
    int C = (nbr/10)%10;
    int D = nbr % 10;
    
    invers = D * 1000 + C * 100 + B * 10 + A ;
    
    printf("Linverce est : %d",invers);
    

    return 0;
}
