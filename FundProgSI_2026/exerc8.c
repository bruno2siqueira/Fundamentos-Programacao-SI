#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1; // ponto A
    float x2, y2; // ponto B
    float dist;   // Distancia dos pontos

    printf("Ponto A: ");
    scanf("%f %f", &x1, &y1); // 10 ou 10.33 ..

    printf("Ponto B: ");
    scanf("%f %f", &x2, &y2); // 10 ou 10.33 ..

    dist = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    printf("Distancia de A e B = %f", dist);

    return 0;
}