#include<stdio.h>
#include<stdlib.h>

void bubbleSort(char vetor[], int tamanho){
	int i, continua, aux;
	
	do{
		continua = 0;
		for(i = 0; i < tamanho-1; i++){
			if(vetor[i] > vetor[i + 1]){
				aux = vetor[i + 1];
				vetor[i + 1] = vetor[i];
				vetor[i] = aux;
			}
			continua = i;
		}
		tamanho--;
	}while(continua != 0);	
}
