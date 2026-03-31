#include <stdio.h> // Include the standard input/output library

int main()
{
    // Declare and initialize variables
    char nome[20]; // armazenar um nome
    int idade;     // armazenar uma idade
    char sexo;     // armazenar o sexo (M/F)

    // Solicitar ao usuário que insira o nome
    scanf("%s", nome);   // Ler o nome do usuário - nao precisamos colocar o & (e comercial) porque nome é um array, e o nome do array já é um ponteiro para o primeiro elemento
    scanf("%d", &idade); // Ler a idade do usuário - aqui eu preciso do & (e comercial) porque idade é uma variável do tipo int, e precisamos passar o endereço dela para a função scanf
    scanf(" %c", &sexo); // Ler o sexo do usuário - o espaço antes de %c é para ignorar qualquer caractere de newline que possa estar no buffer

    printf("NOME: %s IDADE: %d SEXO: %c \n", nome, idade, sexo);

    printf("%s \n", nome);
    printf("%d \n", idade);
    printf("%c", sexo);

    return 0; // Retornar 0 para indicar que o programa terminou com sucesso
}