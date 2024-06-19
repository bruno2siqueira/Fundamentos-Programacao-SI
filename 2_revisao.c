//2) Escreva um programa em C que implemente uma calculadora simples. O programa deve solicitar ao usuário dois números e uma operação (adição, subtração, multiplicação ou divisão) e exibir o resultado.
// adição +
// subtração -
// multiplicação *
// divisão /

#include <stdio.h>

int main()
{
    int x, y;
    char op;
    scanf("%d", &x);
    scanf("%d", &y);    
    printf("Selecione a operação: soma, subtracao, multiplicacao ou divisao\n");
    fflush(stdin);
    scanf("%c", &op);
    switch (op){
    case '+':  
        printf("Soma = %d", x+y); 
    break;
    case '-':
        printf("Subtracao = %d", x - y);
        break;
    case '*':
        printf("Multiplicacao = %d", x * y);
        break;
    case '/':
        if(y == 0){ 
            printf("não é possivel dividir %d por zero", x);
        } else{
            printf("Subtracao = %d", x/y);
        }
        break;
    default:
        printf("Operacao invalida");

    }
    fflush(stdin);
    return 0;
}

