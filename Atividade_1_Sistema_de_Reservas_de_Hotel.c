//Neste exemplo, criaremos um sistema que permite ao usuário cadastrar uma senha e depois 
//verificar se a senha digitada está correta. Usaremos estruturas condicionais para validar 
//a senha e permitir ou negar o acesso.
#include <stdio.h>

int main() {
    int roomType, days;
    float cost;

    printf("Bem-vindo ao Sistema de Reservas de Hotel!\n");
    printf("Escolha o tipo de quarto:\n");
    printf("1. Quarto Simples (R$ 150 por noite)\n");
    printf("2. Quarto Duplo (R$ 250 por noite)\n");
    printf("3. Suíte (R$ 400 por noite)\n");
    scanf("%d", &roomType);

    if (roomType < 1 || roomType > 3) {
        printf("Tipo de quarto inválido!\n");
        return 1;
    }

    printf("Quantos dias você gostaria de se hospedar?\n");
    scanf("%d", &days);

    if (days <= 0) {
        printf("Número de dias inválido!\n");
        return 1;
    }

    switch (roomType) {
        case 1:
            cost = 150.0 * days;
            break;
        case 2:
            cost = 250.0 * days;
            break;
        case 3:
            cost = 400.0 * days;
            break;
    }

    printf("O custo total da sua estadia é: R$ %.2f\n", cost);

    return 0;
}
