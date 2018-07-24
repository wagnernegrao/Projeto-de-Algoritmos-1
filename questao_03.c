#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, x, y;
	int vetor[12];

	for(i = 0; i < 12; i++){
		vetor[i] = rand()%12;
	}

	for(i = 0; i < 12; i++){
		printf("[%i] ", vetor[i]);
	}

	x = (rand()%12);
	y = (rand()%12);
	
	printf("\n\nPosicao de x: vetor[%i]", x);
	printf("\nPosicao de y: vetor[%i]", y);
	printf("\nSoma dos elementos do vetor: %i \n", (vetor[x] + vetor[y]));
	
	return 0;
}