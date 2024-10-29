#include <stdio.h>

void imprimir(char nome[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%c\n", nome[i]);
    }
}

int main() {
    char nome[6] = "texto";

    imprimir(nome, 6);

    return 0;
}