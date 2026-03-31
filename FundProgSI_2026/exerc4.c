#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    scanf("%f %f %f", &n1, &n2, &n3); // notas inseridas em uma linha
    media = (n1 + n2 + n3) / 3;
    printf("Media Final: %.1f", media);

    return 0;
}