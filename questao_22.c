#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "questao_22_printVetor.h"

#include "questao_22_bubbleSort.h"
#include "questao_22_insertSort.h"
#include "questao_22_selectionSort.h"

#include "questao_22_mergeSort.h"
#include "questao_22_quickSort.h"
#include "questao_22_heapSort.h"

#include "questao_22_countingSort.h"
#include "questao_22_bucketSort.h"

#define TAM 6

int main(){
	clock_t tempo, t0, t1; //Armazenadores de tempo do procesador
	tempo = clock(); //Tempo de execucao do programa
	int vetor[TAM], i;
	

    printf("\n\n\tVETOR NAO ORDENADO\n");
	for(i = 0; i < TAM; i++){
		vetor[i] = rand()%TAM;
	}
	printVetor(vetor, TAM);


	
	printf("\n\n\tVETOR BUBBLE SORT\n");
	bubbleSort(vetor, TAM);
	printVetor(vetor, TAM);
	

	
	printf("\n\n\tVETOR INSERT SORT\n");
	insertSort(vetor, TAM);
	printVetor(vetor, TAM);
	

	
	printf("\n\n\tVETOR SELECTION SORT\n");
	selectionSort(vetor, TAM);
	printVetor(vetor, TAM);
	
	
	printf("\n\n\tVETOR MERGE SORT\n");
	mergeSort(vetor, 0, TAM);
	printVetor(vetor, TAM);
	

	
	printf("\n\n\tVETOR QUICK SORT\n");
	quickSort(vetor, 0, TAM);
	printVetor(vetor, TAM);
	
	
	printf("\n\n\tVETOR HEAP SORT\n");
	heapSort(vetor, TAM);
	printVetor(vetor, TAM);
	
	
	printf("\n\n\tVETOR COUNTING SORT\n");
	countingSort(vetor, TAM);
	printVetor(vetor, TAM);
	
	
	printf("\n\n\tVETOR BUCKET SORT\n");
	bucketSort(vetor, TAM);
	printVetor(vetor, TAM);
	
	return 0;
}
