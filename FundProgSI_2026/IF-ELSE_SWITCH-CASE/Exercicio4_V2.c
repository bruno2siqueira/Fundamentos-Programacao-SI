//Ler um número de 1 a 7 indicando o dia da semana.
//O programa deve imprimir o dia em extenso e uma mensagem dizendo 
//se é dia útil ou final de semana. Por exemplo, se for digitado 1, 
//o programa imprime: Domingo - final de semana. Se for digitado 2, 
//o programa imprime: Segunda - dia útil e assim por diante.
#include <stdio.h>
int main()
{
    int num; //numero inteiro a ser lido de 1 a 7
    
    printf("Escreva um numero de 1 ate 7: ");
    scanf("%d", &num);
    
    if(num == 1)
            printf("Domingo - final de semana");
    else if (num == 2)
            printf("Segunda - dia util"); 
    else if (num == 3)
            printf("Terca - dia util"); 
    else if (num == 4)
            printf("Quarta - dia util");
    else if (num == 5)
            printf("Quinta - dia util");
    else if (num == 6)
            printf("Sextouuu - dia util");
    else if (num == 7)
            printf("Sabado - final de semana");
    else
            printf("Numero invalido");
    return 0;
}
