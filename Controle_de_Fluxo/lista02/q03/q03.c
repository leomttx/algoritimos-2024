#include <stdio.h>

int main()
{

    int num;

    printf("Digite um número: ");

    scanf("%d", &num);

    if (num % 3 == 0)
    {
        printf("O número é divisvel por 3.\n");
    }
    else if (num % 5 == 0)
    {
        printf("O número é divisível por 5.\n");
    }
    else
    {
        printf("O número não é divisível por 3 nem por 5.\n");
    }

    return 0;
}