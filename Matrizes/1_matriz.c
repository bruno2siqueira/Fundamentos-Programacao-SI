#include "stdio.h"
int main()
{
    int i, j, ln, cl;
    printf("Informe a quantidade de linhas");
    scanf("%d", &i);
    ln = i;
    printf("Informe a quantidade de colunas");
    scanf("%d", &j);
    cl = j;
    int matriz[i][j];
    for (i = 0; i < ln; i++)
    {
        for (j = 0; j < cl; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < ln; i++)
    {
        for (j = 0; j < cl; j++)
        {
            printf("matriz [%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    // matriz transposta
    for (i = 0; i < ln; i++)
    {
        for (j = 0; j < cl; j++)
        {
            printf("matriz [%d][%d] = %d\n", i, j, matriz[j][i]);
        }
    }
}