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

    return 0;
}