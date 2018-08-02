#include<stdio.h>
#include<stdlib.h>

void insertSort(char vetor[], int tamanho){
	int i, j;
	char aux;
	
	for(i = 1; i < tamanho; i++){
		for(j = i; (j > 0) && (vetor[j] < vetor[j - 1]); j--){
			aux = vetor[j - 1];
			vetor[j - 1] = vetor[j];
			vetor[j] = aux;
		}
	}
}
