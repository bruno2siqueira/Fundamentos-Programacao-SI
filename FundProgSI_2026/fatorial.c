#include <stdio.h>
int fatorial(int n)
{
    int i, fat = 1;
    for (i = 1; i <= n; i++)
    {
        fat = fat * i;
    }
    return fat;
}

void main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    printf("O fatorial de %d é: %d\n", n, fatorial(n));
    printf("\nFim do programa.\n");
}