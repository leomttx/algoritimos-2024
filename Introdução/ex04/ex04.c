// Expressão e Oparadores em C

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int soma, subtracao, multiplicacao, divisao, modulo;

    // Expressões aritméticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    modulo = a % b;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Módulo: %d\n", modulo);

    // Expressão lógica
    int c = 10;
    int d = 20;
    int e = 30;
    int f = 40;

    if (c < d && e < f)
    {
        printf("Expressão lógica verdadeira\n");
    }
    else
    {
        printf("Expressão lógica falsa\n");
    }

    // Operadores de incremento e decremento

    int g = 10;
    int h = 20;

    g++;
    h--;

    printf("Incremento: %d\n", g);
    printf("Decremento: %d\n", h);

    return 0;
}