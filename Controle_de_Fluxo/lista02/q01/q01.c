#include <stdio.h>

int main()
{

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero é par\n");
    }
    else
    {
        printf("O numero é ímpar\n");
    }

    return 0;
}