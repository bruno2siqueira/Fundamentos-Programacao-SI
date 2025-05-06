/* Questão 1 - Cálculo Básico com Validação
    Escreva um programa em C que solicite ao usuário dois números inteiros e realize as seguintes operações:
    1.	Calcule e exiba o produto (multiplicação) dos dois números
    2.	Calcule e exiba o resultado da divisão inteira do primeiro pelo segundo número
        2.1. O programa deve verificar se o segundo número é diferente de zero antes de realizar a divisão
        2.2. Caso o segundo número seja zero, o programa deve exibir uma mensagem de erro indicando que não é possível dividir por zero
*/
#include <stdio.h>

int main()
{
    int num1, num2, produto;
    float divisao;
    printf("Entrada: ");
    // Solicita ao usuário o primeiro e o segundo número alinhado
    scanf("%d %d", &num1, &num2);

    // Calcula o produto dos dois números
    produto = num1 * num2;            // Exibe o resultado do produto
    printf("Produto: %d\n", produto); // Exibe o resultado da divisão

    // precisamos verificar se o segundo número é diferente de zero antes de realizar a divisão
    if (num2 != 0)
    {
        divisao = num1 / num2;              // Realiza a divisão inteira
        printf("Divisão: %.2f\n", divisao); // Exibe o resultado da divisão
    }
    else
    {
        printf("Erro: Divisão por zero não é permitida.\n"); // Mensagem de erro
    }
    return 0;
}