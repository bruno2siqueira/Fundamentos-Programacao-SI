#include <stdio.h>
int main()
{
    int v[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Informe v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("Todos os valores pares:\n");
    for (i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0) // se o valor for par
        {
            printf("%d ", v[i]);
        }
    }
    printf("\n Fim do programa.\n");
}