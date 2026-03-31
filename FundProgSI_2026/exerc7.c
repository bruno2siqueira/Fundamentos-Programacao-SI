#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float raio, area;

    scanf("%f", &raio); // 10 ou 10.33 ..
    area = PI * pow(raio, 2);
    printf("%.2f", area);

    return 0;
}