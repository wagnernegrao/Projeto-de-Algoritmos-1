#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 6

#include "printVetor.h"

#include "bubbleSort.h"
#include "insertSort.h"

int main(){
	clock_t p0, p1;
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
	
	p0 = clock;
	printf("\n\n\tCADEIA DE CARACTERES ORDENADA BUBBLE SORT\n");
	bubbleSort(vetor, TAM);
	printf("\nTempo -> %i segundos\n", (double)(p1-p0)/CLOCKS_PER_SEC);
	printf("\nOrdenado: ");
	printVetor(vetor, TAM);
	p1= clock;
	
	
	printf("\n\n\tCADEIA DE CARACTERES NAO ORDENADA\n");
	printVetor(vetor, TAM);

	p0 = clock;
	printf("\n\n\tCADEIA DE CARACTERES ORDENADA INSERT SORT\n");
	insertSort(vetor, TAM);
	printf("\nTempo -> %i segundos\n", (double)(p1-p0)/CLOCKS_PER_SEC);
	printf("\nOrdenado: ");
	printVetor(vetor, TAM);
	p1 = clock;
}
