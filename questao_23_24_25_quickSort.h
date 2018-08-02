#include<stdio.h>
#include<stdlib.h>

int ordenacao(char vetor[], int inicio, int fim){
	int i;
	char aux;
	int j = inicio - 1;
	char pivo = vetor[fim];
	
	for(i = inicio; i < fim; i++){
		if(vetor[i] <= pivo){
			j++;
			
			aux = vetor[j];
			vetor[j] = vetor[i];
			vetor[i] = aux;
		}
	}
	aux = vetor[j + 1];
	vetor[j + 1] = vetor[fim];
	vetor[fim] = aux;
	return j + 1;
}

void quickSort(char vetor[], int inicio, int fim){
	if(inicio < fim){
		int pivo = ordenacao(vetor, inicio, fim);
		quickSort(vetor, inicio, pivo - 1);
		quickSort(vetor, pivo + 1, fim);
	}
}
