#include <stdio.h>
#include <math.h>

int main()
{

    double raio, v;

    scanf("%lf", &raio);

    v = (4.0 / 3) * 3.14159 * pow(raio, 3);

    printf("VOLUME = %.3lf\n", v);

    return 0;
}