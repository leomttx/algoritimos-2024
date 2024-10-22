#include <stdio.h>
#include <math.h>

// ponto 1 = xy[0] = x1 e xy[1] = y1
double lerXY(double xy[2])
{
    for (int i = 0; i < 2; i++)
    {
        scanf("%lf", &xy[i]);
    }
}

// ponto 2 = yx[0] = x2 e yx[1] = y2
double lerYX(double yx[2])
{
    for (int i = 0; i < 2; i++)
    {
        scanf("%lf", &yx[i]);
    }
}

int main()
{

    double xy[2], yx[2];

    lerXY(xy);
    lerYX(yx);

    printf("%.4lf\n", sqrt(pow(yx[0] - xy[0], 2) + pow(yx[1] - xy[1], 2)));

    // printf("%.1lf %.1lf\n", x[0], y[0]);

    return 0;
}