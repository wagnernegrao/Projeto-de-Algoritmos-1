#include <stdio.h>
#include <stdlib.h>

void selectionSort(int vetor[], int tamanho){
	int i, j; //	Indice do vetores
	int aux; //	Recebe elemento para troca
	int menor; //	Recebe o menor elemento do vetor
	
	/* 1 - Percorre todo vetor menor o ultimo elemento*/
	for(i = 0; i < tamanho-1; i++){
		menor = i; //	Recebe i como menor elemento
	/* 2 - Percorre todo vetor menor o primeiro pq j recebe i+1 sendo assim todo vetor*/
		for(j = i+1; j < tamanho; j++){
			if(vetor[j] < vetor[menor]){ //	Se o primeiro elemento for menor que o proximo 'menor' recebe j 
				menor = j;
			}
		
	/* 3 - Troca o menor elemento com o indice de i(sempre vai ser no inicio) */
			aux = vetor[i]; //	Elemnto da etapa 1
			vetor[i] = vetor[menor]; //	Recebe o menor elemento
			vetor[menor] = aux; //	Troca para posicao do menor elemento
		}
	}
}
