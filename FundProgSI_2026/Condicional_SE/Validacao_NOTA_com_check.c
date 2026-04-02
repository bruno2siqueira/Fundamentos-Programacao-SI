#include <stdio.h>
int main()
{

    float nota;
    printf("Digite a nota entre 0.0 e 10.0: ");
    scanf("%f", &nota);
    // validar se nota é válida com laco de repeticao
    for (; nota < 0 || nota > 10;) // enquanto a nota for menor que 0 ou maior que 10, o laco se repete
    {
        printf("Nota invalida! Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);
    }

    if (nota >= 7.0)
    {
        printf("Aluno(a) aprovado(a) com nota %.1f", nota);
    }
    else if (nota >= 5.0 && nota < 7.0)
    {
        printf("Aluno(a) em recuperacao com nota %.1f", nota);
    }
    else
    {
        printf("Aluno(a) reprovado(a) com nota %.1f", nota);
    }

    return 0;
}
