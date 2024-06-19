/*
    Neste exemplo, criaremos um sistema que permite ao usuário cadastrar uma senha e depois
verificar se a senha digitada está correta. Usaremos estruturas condicionais para validar 
a senha e permitir ou negar o acesso. 
*/
    
#include <stdio.h>
#include <string.h>

int main() {
    char password[20], input[20];
    int attempt = 0;
    int max_attempts = 3;

    printf("Cadastro de Senha:\n");
    printf("Digite sua nova senha: ");
    scanf("%s", password);

    printf("Senha cadastrada com sucesso!\n");

    while (attempt < max_attempts) {
        printf("Verificação de Senha (%d de %d tentativas):\n", attempt + 1, max_attempts);
        printf("Digite sua senha: ");
        scanf("%s", input);

        if (strcmp(password, input) == 0) {
            printf("Acesso concedido!\n");
            return 0;
        } else {
            printf("Senha incorreta!\n");
            attempt++;
        }
    }

    printf("Número máximo de tentativas atingido. Acesso negado.\n");

    return 0;
}
