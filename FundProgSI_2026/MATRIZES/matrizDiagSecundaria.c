#include <stdio.h>
#define LIMITE 3
int main()
{
    int l, c;                   // indices que controlam as linhas e colunas da matriz
    int matriz[LIMITE][LIMITE]; // matriz de 3 linhas e 3 colunas

    // preciso agora de 2 lacos for para preencher a matriz
    for (l = 0; l < LIMITE; l++)
    { // linhas
        for (c = 0; c < LIMITE; c++)
        {
            if ((l + c) == (LIMITE - 1))
            { // testar o valor elemento matriz[l][c]
                matriz[l][c] = 1;
            }
            else
            {
                matriz[l][c] = 0;
            }
        }
    }
    for (l = 0; l < LIMITE; l++)
    { // linhas
        for (c = 0; c < LIMITE; c++)
        {                                  // colunas
            printf("%d \t", matriz[l][c]); // mostrar a matriz
        }
        printf("\n"); // quebra de linha após cada linha da matriz
    }
}
