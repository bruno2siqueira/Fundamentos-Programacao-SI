#include <stdio.h>
int main()
{

    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);

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
