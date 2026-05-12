#include <stdio.h>
int main()
{
    int v[10];
    int i, acc = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Informe v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("Todos os valores pares:\n");
    for (i = 0; i < 10; i++)
    {
        acc = acc + v[i]; // acc = acc + v[i] é o mesmo que acc += v[i]
    }
    printf("A soma de todos os valores é: %d\n", acc);
    printf("\nFim do programa.\n");
}