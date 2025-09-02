#include <stdio.h>

void afficherBinaire(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int bits[32];
    int i = 0;

    while (n > 0) {
        bits[i] = n % 2;  
        n = n / 2;        
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main() {
    int nombre ;

    printf("donner un nombre : \n");
    scanf("%d",&nombre);



    printf("Binaire : ");
    afficherBinaire(nombre);

    printf("\n ");
    
    printf("Hixadicimal %X\n",nombre );

    return 0;
}
