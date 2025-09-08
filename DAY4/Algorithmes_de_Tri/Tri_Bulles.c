#include <stdio.h>

void tri_bulles(int tab[], int taille)
{
    int Temp;
    for (int i = 0; i < taille - 1; i++)
    {
        for (int j = 0; j < taille - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                Temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = Temp;
            }
        }
    }
}

int main()
{
    int tab[] = {1, 6, 9, 2, 4, 5, 6};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Avant tri : ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }

    tri_bulles(tab, taille);

    printf("\nAprès tri : ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}
