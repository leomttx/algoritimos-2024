#include <stdio.h>
#include <math.h>

double areaTriangulo(double a, double b, double c)
{ // a e b = bases, c = altura
    return (a * c) / 2;
}

double areaCirculo(double c)
{ // c = raio
    double pi = 3.14159;
    return pi * pow(c, 2);
}

double areaTrapezio(double a, double b, double c)
{ // a e b = bases, c = altura
    return ((a + b) * c) / 2;
}

double areaQuadrado(double b)
{ // b = lado
    return pow(b, 2);
}

double areaRetangulo(double a, double b)
{ // a e b = lados
    return a * b;
}

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", areaTriangulo(a, b, c));

    printf("CIRCULO: %.3lf\n", areaCirculo(c));

    printf("TRAPEZIO: %.3lf\n", areaTrapezio(a, b, c));

    printf("QUADRADO: %.3lf\n", areaQuadrado(b));

    printf("RETANGULO: %.3lf\n", areaRetangulo(a, b));

    return 0;
}