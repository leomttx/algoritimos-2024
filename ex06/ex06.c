// Funções em C

#include <stdio.h>

int media(int a, int b, int c)
{
    int soma = a + b + c;
    int mediaa = soma / 3;

    return mediaa;
}

int main()
{
    int x, y, z;

    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    printf("Digite o terceiro número: ");
    scanf("%d", &z);

    int m = media(x, y, z);

    printf("A Média entre os número %d, %d e %d é: %d\n", x, y, z, m);

    return 0;
}
