#include<stdio.h>
#include<stdlib.h>

void printVetor(char vetor[], int tamanho){
	int i = 0;
	while(i < tamanho){
		printf("%c", vetor[i]);
		i++;	
	}
	printf("\n\n");
}

