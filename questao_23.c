#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "printVetor.h"
#include "bubbleSort.h"
#include "insertSort.h"

#define TAM 6


int main(){
	char vetor[TAM];
	int i = 0;
	printf("\nDigite as letras: \n");
	while(i < TAM){
		printf("\nLetra: ");
		scanf("%c%*c", &vetor[i]);
		i++;
	}
	
	printf("\n\n\tCADEIA DE CARACTERES NAO ORDENADA\n");
	printVetor(vetor, TAM);
	
	printf("\n\n\tCADEIA DE CARACTERES ORDENADA BUBBLE SORT\n");
	bubbleSort(vetor, TAM);
	printVetor(vetor, TAM);
	
	printf("\n\n\tCADEIA DE CARACTERES NAO ORDENADA\n");
	printVetor(vetor, TAM);
	
	printf("\n\n\tCADEIA DE CARACTERES ORDENADA INSERT SORT\n");
	insertSort(vetor, TAM);
	printVetor(vetor, TAM);
	
	return 0;
}
