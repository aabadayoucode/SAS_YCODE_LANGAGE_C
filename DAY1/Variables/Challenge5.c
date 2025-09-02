#include <stdio.h>

int main()
{

    float temperateurEnC;

    printf("donner la temperateur :");
    scanf("%f", &temperateurEnC);

    if (temperateurEnC < 0)
    {

        printf("etat solide");
    }
    else if (temperateurEnC >= 0 && temperateurEnC < 100)
    {

        printf("etat liquide");
    }
    else
    {
        printf("etat gaze");
    }

    return 0;
}