// Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.
#include <stdio.h>

int main()
{
    float metros;
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    printf("O valor em decimetros é: %.2f\n", metros * 10);
    printf("O valor em centimetros é: %.2f\n", metros * 100);
    printf("O valor em milimetros é: %.2f\n", metros * 1000);

    return 0;
}