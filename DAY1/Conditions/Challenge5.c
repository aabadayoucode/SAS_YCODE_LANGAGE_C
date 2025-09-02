#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float del, x1, x2;

    printf("Entrez a : ");
    scanf("%d", &a);

    printf("Entrez b : ");
    scanf("%d", &b);

    printf("Entrez c : ");
    scanf("%d", &c);

    if (a == 0) {
        printf("Ce n'est pas une équation du second degré.\n");
        return 0;
    }

    del = pow(b, 2) - 4 * a * c;

    if (del < 0) {
        printf("lensemble vide\n");
    } else if (del == 0) {
        x1 = -b / (2.0 * a);
        printf("Une seule solution  : x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(del)) / (2.0 * a);
        x2 = (-b - sqrt(del)) / (2.0 * a);
        printf("Deux solutions  : x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
