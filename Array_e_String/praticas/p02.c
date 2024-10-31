#include <stdio.h>

int main() {

	int vetor[5] = {10, 20, 2, 13, 5}, indiceMaior, maior, menor, indiceMenor;

	maior = vetor[0];
	indiceMaior = 0;
	menor = vetor[0];
	indiceMenor = 0;

	for (int i = 0; i<5; i++){
		if (vetor[i] > maior){
			maior = vetor[i];
			indiceMaior = i;
		}
		if (vetor[i] < menor){
			menor = vetor[i];
			indiceMenor = i;
		}
	}

	printf("Maior do vetor e seu índice: %d %d\n",maior, indiceMaior);
	printf("Menor do vetor e seu ìndice: %d %d\n", menor, indiceMenor);

	return 0;
}