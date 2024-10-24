#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int multiplica(int a, int b)
{
    return a * b;
}

int main()
{ // Função principal

    int x, y;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    printf("O produto de %d e %d é %d\n", x, y, multiplica(x, y));

    return 0; // Retorna 0
}