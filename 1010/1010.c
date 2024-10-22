#include <stdio.h>

int main()
{

    int codigo1, codigo2, quantidade1, quantidade2;
    double valor1, valor2;

    scanf("%d %d %lf", &codigo1, &quantidade1, &valor1);
    scanf("%d %d %lf", &codigo2, &quantidade2, &valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", (quantidade1 * valor1) + (quantidade2 * valor2));

    return 0;
}