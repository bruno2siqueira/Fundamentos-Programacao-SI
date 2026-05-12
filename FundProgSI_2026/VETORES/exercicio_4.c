#include <stdio.h>
int main()
{
    int v[10];
    int i, maior;

    for (i = 0; i < 10; i++)
    {
        printf("Informe v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    maior = v[0]; // assumimos que o maior é o primeiro elemento do vetor
    for (i = 1; i < 10; i++)
    {
        if (maior < v[i]) // se o maior for menor que o elemento atual do vetor
        {
            maior = v[i]; // o maior passa a ser o elemento atual do vetor
        }
  // outra foram de fazer isso seria:
        if(v[i] > maior) // se o elemento atual do vetor for maior que o maior
        {
            maior = v[i]; // o maior passa a ser o elemento atual do vetor
        }
    }
    printf("O maior valor é: %d\n", maior);
    printf("\nFim do programa.\n");
}