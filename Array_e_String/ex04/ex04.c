#include <stdio.h>

int contarVogais(char s[]) {
    int i, cont = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            cont++;
        }
    }
    return cont;
}

int main() {
    char s[100];
    scanf("%s", s);
    printf("A string tem %d vogais\n", contarVogais(s));
    return 0;
}