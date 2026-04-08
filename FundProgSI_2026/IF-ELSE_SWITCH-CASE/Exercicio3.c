//Um código está correto se for maior que 119, ou menor e igual a 46. 
//Escrever um programa em C que teste este valor e some 1 no código se ele estiver errado. 
#include <stdio.h>
int main()
{
    int codigo = 100;
    if (codigo > 119 || codigo <= 46){
        printf("Verdadeiro");
    }
    else{
        codigo = codigo + 1;
        //codigo++;
        printf("Falso - codigo novo = %d", codigo);
    }
    return 0;
}
