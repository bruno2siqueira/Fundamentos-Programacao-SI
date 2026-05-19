#include <stdio.h>

int main()
{
    int l, c;         // indices que controlam as linhas e colunas da matriz
    int matriz[3][3]; // matriz de 3 linhas e 3 colunas

    // preciso agora de 2 lacos for para preencher a matriz
    for (l = 0; l < 3; l++)
    { // linhas
        for (c = 0; c < 3; c++)
        {                               // colunas
            printf("Informe um valor: ");
            scanf("%d", &matriz[l][c]); // preenche a matriz
        }
    }
    for (l = 0; l < 3; l++)
    { // linhas
        for (c = 0; c < 3; c++)
        {                                  // colunas
            printf("%d \t", matriz[l][c]); // mostrar a matriz
        }
        printf("\n"); // quebra de linha após cada linha da matriz
    }
}