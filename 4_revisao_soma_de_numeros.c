#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma de todos os números de 1 a %d é %d\n", n, soma);

    return 0;
}
