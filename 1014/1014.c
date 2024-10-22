#include <stdio.h>

double consumoMedio(double distancia, double combustivel_gasto)
{
    return distancia / combustivel_gasto;
}

int main()
{
    double x, y;

    scanf("%lf %lf", &x, &y);

    printf("%.3lf km/l\n", consumoMedio(x, y));

    return 0;
}