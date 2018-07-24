#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, aux, tam = 15, vetor[16];

	for(i = 0; i < 16; i++){
		vetor[i] = rand()%16;
	}

	printf("\n\nVetor nao ordenado\n\n");
	for(i = 0; i < 16; i++){
		printf("[%i] ", vetor[i]);
	}

	for(i = 0;  i < 8; i++){
		aux = vetor[i];
		vetor[i] = vetor[tam];
		vetor[tam] = aux;
		tam--;
	}

	printf("\n\nVetor pos ordenado\n\n");
	for(i = 0; i < 16; i++){
		printf("[%i] ", vetor[i]);
	}
	printf("\n\n");
	return 0;
}