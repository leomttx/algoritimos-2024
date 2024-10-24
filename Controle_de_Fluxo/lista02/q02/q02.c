#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("O número é negativo.\n");
    }
    else if (num == 0)
    {
        printf("O número é zero.\n");
    }
    else
    {
        printf("O número é positivo.\n");
    }

    return 0;
}