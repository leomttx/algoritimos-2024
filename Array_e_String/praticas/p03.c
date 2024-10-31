#include <stdio.h>

int main()
{

	int vetor[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Digite o número no índice %d:\n", i);
		scanf("%d", &vetor[i]);
	}

	for (int j = 4; j >= 0; --j)
	{
		printf("O inverso é: %d\n", vetor[j]);
	}

	return 0;
}