// Estruturas de Controle em C

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Número par\n");
    }
    else
    {
        printf("Número ímpar\n");
    }

    return 0;
}