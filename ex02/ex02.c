// Leitura e Escrita de Dados em C

#include <stdio.h>

int main()
{
    int inteiro;
    float pontoflutuante;
    double pontofutuanteduplo;
    char caractere;
    char string[100]; // Vetor de caracteres

    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número de ponto flutuante: ");
    scanf("%f", &pontoflutuante);

    printf("Digite um número de ponto flutuante duplo: ");
    scanf("%lf", &pontofutuanteduplo);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // O espaço antes do %c é necessário para ignorar o caractere de nova linha

    printf("Digite uma string: ");
    scanf(" %s", string);

    printf("Inteiro: %d\n", inteiro);
    printf("Ponto flutuante: %f\n", pontoflutuante);
    printf("Ponto flutuante duplo: %lf\n", pontofutuanteduplo);
    printf("Caractere: %c\n", caractere);
    printf("String: %s\n", string);

    return 0;
}