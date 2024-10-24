#include <stdio.h>

int media(double a, double b, double c, double d)
{
    return (a + b + c + d) / 3;
}

int main()
{
    double x, y, z, w;

    printf("Digite quatro números reais: ");
    scanf("%lf %lf %lf %lf", &x, &y, &z, &w);

    printf("A média de %.1lf, %.1lf, %.1lf e %.1lf é %d\n", x, y, z, w, media(x, y, z, w));

    return 0;
}