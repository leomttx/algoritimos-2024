#include <stdio.h>

int modulo(int a, int b)
{
    if (a < b)
        return a; // caso base
    else
        return modulo(a - b, b);
}

int main()
{
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("O resto da divisão de %d por %d é %d\n", a, b, modulo(a, b));
    return 0;
}