#include <stdio.h>

int main() {
	
	int vetor[5] = {10, 30, 50, 2, 3}, soma;


	soma = 0;

	for (int i; i < 5; i++){
		soma += vetor[i];
	}

	printf("%d\n", soma);

	return 0;
}
