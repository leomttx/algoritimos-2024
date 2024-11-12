#include <stdio.h>

int main()
{
    char nomes[3][50];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome: ");
        fgets(nomes[i], 50, stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s", nomes[i]);
    }

    return 0;
}