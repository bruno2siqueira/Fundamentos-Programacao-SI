// 1) Fazer um programa para ler um número e
// imprimir uma mensagem informando se ele é positivo, negativo ou igual a zero.

#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)
        printf("Numero maior que ZERO");
    if (numero < 0)
        printf("Numero menor que ZERO");
    if (numero == 0)
        printf("Numero igual a ZERO");
}
