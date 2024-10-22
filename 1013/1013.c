#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b, int c)
{
    int maiorEntreDois = (a + b + abs(a - b)) / 2;

    int maiorEntreTres = (maiorEntreDois + c + abs(maiorEntreDois - c)) / 2;

    return maiorEntreTres;
}

int main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", maior(a, b, c));

    return 0;
}