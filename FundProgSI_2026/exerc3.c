// Desenvolva um programa que leia uma
// temperatura em graus Celsius e exiba o valor informado.
#include <stdio.h> // Include the standard input/output library

int main()
{
    float p1, p2, soma;
    printf("Digite o valor do Prod.1: ");
    scanf("%f", &p1);
    printf("Digite o valor do Prod.2: ");
    scanf("%f", &p2);
    soma = p1 + p2;

    printf("Soma dos dois produtos: %.2f", soma);

    return 0;
}