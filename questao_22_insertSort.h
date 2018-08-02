#include <stdio.h>
#include <stdlib.h>

void insertSort(int vetor[], int tamanho){
	int i, j; //	Indices dos vetores
	int aux; //		Auxilia na comparacao de elemento
	
	/* 1 - Percorre todo vetor a partir do indice 1*/
	for(i = 1; i < tamanho; i++){
		aux = vetor[i]; //	Recebe o segundo elemento
	/* 2 - Percorre todo vetor fazendo comparacao de qual maior elemento*/
		for(j = i; (j > 0) && (aux < vetor[j-1]) ; j--){
			vetor[j] = vetor[j-1]; //	Troca o elemento atual recebe o elemento anterior
		}
	/* 3 */
		vetor[j] = aux; // Recebe o indice do elemento de parada na comparacao do fore
	}
}
