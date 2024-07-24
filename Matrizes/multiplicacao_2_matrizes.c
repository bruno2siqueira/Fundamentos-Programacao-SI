#include "stdio.h"
int main()
{
    // multiplicar 2 matrizes
    int i, j;
    int m[2][2], n[2][2];

    // preencendo matriz M
    printf("Preencha a matrz M\n:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Preencha a matrz N\n:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" m[%d][%d] = %d\n", i, j, m[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" n[%d][%d] = %d\n", i, j, n[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("m[%d][%d] * m[%d][%d] = %d\n", i, j, j, i, m[i][j] * n[j][i]);
        }
    }
}