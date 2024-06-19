//1) Escreva um programa em C que leia um número inteiro e determine se ele é par ou ímpar.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    fflush(stdin);
    if (n%2 == 0){
        printf("N eh PAR");
    }else{
        printf("N eh IMPAR");
    }
    return 0;
}

