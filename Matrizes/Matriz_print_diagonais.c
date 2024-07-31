#include <stdio.h>
#include <stdlib.h>
#include <time.h> //necessário p/ função time()
int main()
{
    int tam = 10;
    int l, c, mat[tam][tam];
    srand(time(NULL));

    // preenche a matriz gerando valores aleatórios
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            mat[l][c] = rand() % 100;
        }
    }

    // imprime a matriz na tela
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }
    // imprimindo os elementos da diagonal principal
    printf("\n\nDiagonal principal: ");
    for (l = 0; l < tam; l++)
    {
        printf("%d ", mat[l][l]);
    }
    // imprimindo os elementos da diagonal principal
    printf("\n\nDiagonal principal com 2 lacos for: ");
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            if (l == c)
                printf("%d ", mat[l][c]);
        }
    }

    // imprimindo os elementos da diagonal secundária
    printf("\n\nDiagonal secundária: ");
    for (l = 0; l < tam; l++)
    {
        printf("%d ", mat[l][tam - 1 - l]);
    }

    // imprimindo os elementos da diagonal principal
    printf("\n\nDiagonal principal com 2 lacos for: ");
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            if (l + c == tam - 1)
                printf("%d ", mat[l][c]);
        }
    }

    // imprimindo os elementos da diagonal principal
    printf("\n\nDiagonal principal com 2 lacos for: ");
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            if (l + c == tam - 1)
                printf("%d ", mat[l][c] = 99);
        }
    }
    printf("\n");
    // imprime a matriz na tela
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }
    return 0;
}
