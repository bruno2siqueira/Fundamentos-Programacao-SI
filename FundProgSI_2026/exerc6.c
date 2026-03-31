#include <stdio.h> // Include the standard input/output library

int main()
{
    // Declare and initialize variables
    char nome[20]; // armazenar um nome
    char sexo;     // armazenar o sexo (M/F)

    // Solicitar ao usuário que insira o nome
    scanf("%s", nome); // Ler o nome do usuário - nao precisamos colocar o & (e comercial) porque nome é um array, e o nome do array já é um ponteiro para o primeiro elemento

    scanf(" %c", &sexo); // Ler o sexo do usuário - o espaço antes de %c é para ignorar qualquer caractere de newline que possa estar no buffer

    printf("Funcionario: %s ", nome);
    printf("Sexo: %c", sexo);

    return 0; // Retornar 0 para indicar que o programa terminou com sucesso
}