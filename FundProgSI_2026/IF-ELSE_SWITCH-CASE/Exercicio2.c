// Refaça o programa para calcular as raizes de uma equação do segundo grau através da fórmula de Báscara, dando respostas diferentes para os casos: delta menor que zero, igual ao zero ou maior que zero.
// fazer uma versao simples e didática

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b e c da equacao do segundo grau (ax^2 + bx + c = 0): \n");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c; // calculando o delta
    if (delta < 0)
    {
        printf("A equacao nao possui raizes reais \n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("A equacao possui uma raiz real: x = %.2f \n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao possui duas raizes reais: x1 = %.2f e x2 = %.2f \n", x1, x2);
    }

    return 0;
}