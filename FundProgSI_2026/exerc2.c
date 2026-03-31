// Desenvolva um programa que leia uma
// temperatura em graus Celsius e exiba o valor informado.
#include <stdio.h> // Include the standard input/output library

int main()
{
    float temp;

    scanf("%f", &temp); // 23.55
    printf("%.2f", temp);

    return 0; // Retornar 0 para indicar que o programa terminou com sucesso
}