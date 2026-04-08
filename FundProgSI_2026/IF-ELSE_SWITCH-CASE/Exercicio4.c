//Ler um número de 1 a 7 indicando o dia da semana.
//O programa deve imprimir o dia em extenso e uma mensagem dizendo 
//se é dia útil ou final de semana. Por exemplo, se for digitado 1, 
//o programa imprime: Domingo - final de semana. Se for digitado 2, 
//o programa imprime: Segunda - dia útil e assim por diante.
#include <stdio.h>
int main()
{
    int nun; //numero inteiro a ser lido de 1 a 7
    
    printf("Escreva um numero de 1 ate 7: ");
    scanf("%d", &nun);
    
    switch(nun){
        case 1:
            printf("Domingo - final de semana"); break;
        case 2:
            printf("Segunda - dia util"); break;
        case 3:
            printf("Terca - dia util"); break;
        case 4:
            printf("Quarta - dia util"); break;
        case 5:
            printf("Quinta - dia util"); break;
        case 6:
            printf("Sextouuu - dia util"); break;
        case 7:
            printf("Sabado - final de semana"); break;
        default :
             printf("Opção Inválida\n");
        break;
    }
    return 0;
}
