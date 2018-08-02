#include <stdio.h>
#include <stdlib.h>

void printVetor(int vetor[], int tamanho){
  int i;
	for(i = 0; i < tamanho; i++){
		printf("[%i] ", vetor[i]);
	}
	printf("\n\n");
}