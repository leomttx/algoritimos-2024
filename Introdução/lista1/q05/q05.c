#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x1, x2, y1, y2;
    float distancia;

    printf("Digite as coordenadas x1 , y1 , x2, y2:\n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os pontos (%.1f, %.1f) e (%.1f, %.1f) é %.1f\n", x1, y1, x2, y2, distancia);

    return 0;
}