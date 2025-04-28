#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra, nome[20]; // 2 variaveis do tipo char
    int n;
    scanf("%s", nome);    // nao preciso do & porque nome ja eh um ponteiro, já é uma referencia em memoria
    scanf(" %c", &letra); // caractere precisa do & porque eh um tipo char
    scanf("%d", &n);
    printf("Nome: %s\n", nome);
    printf("Numero: %d\n", n);
    printf("Letra: %c\n", letra);
    return 0;
}