#include <stdio.h>
int main()
{
    int v[10];
    int i; // i para controlar o loop

    for (i = 0; i < 10; i++) // i = i +1
    {
        printf("Informe v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("Todos os valores:\n");
    for (i = 0; i < 10; i++) // i = i +1
    {
        printf("%d ", v[i]);
    }
    printf("\n Fim do programa.\n");
}