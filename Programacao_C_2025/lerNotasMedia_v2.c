#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    // scanf("%f %f %f", &n1, &n2, &n3);
    printf("Notas lidas: %f %f %f \n", n1, n2, n3);
    printf("Media: %.2f \n", media);
    return 0;
}