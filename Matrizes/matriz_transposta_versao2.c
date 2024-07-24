#include "stdio.h"
int main()
{
    int i, j, ln, cl;
    printf("Informe a quantidade de linhas");
    scanf("%d", &ln);
    printf("Informe a quantidade de colunas");
    scanf("%d", &cl);
    int m[ln][cl];
    printf("Digite %d elementos na sequencia \n", ln * cl);
    // preencer a matriz
    for (i = 0; i < ln; i++)
    {
        for (j = 0; j < cl; j++)
        {
            scanf("%d", &m[i][j]); // i linha e j coluna
        }
    }
    // mostrar dados da matriz
    for (i = 0; i < ln; i++)
    {
        for (j = 0; j < cl; j++)
        {
            printf("m [%d][%d] = %d\n", i, j, m[i][j]);
        }
    }
    // matriz transposta
    printf("Matriz transposta de m\n");
    int mt[cl][ln];
    for (i = 0; i < cl; i++)
    {
        for (j = 0; j < ln; j++)
        {
            mt[i][j] = m[j][i];
        }
    }
    for (i = 0; i < cl; i++)
    {
        for (j = 0; j < ln; j++)
        {
            printf("mt [%d][%d] = %d\n", j, i, mt[i][j]);
        }
    }
}
