#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "quickSort.h"
#include "printVetor.h"

int main(){
	int i = 0, parada = 0;
	char vetor[10000];
	
	while(parada != 1){
		printf("\n[%i] - Digite uma cadeia de caracteres: ", i);
		scanf("%s", &vetor[i]);
		i++;
		printf("\nDeseja continuar? sim - [0] ou nao [1] -> ");
		scanf("%i", &parada);
	}
	
	quickSort(vetor, 0, i-1);

	printf("\nElementos Ordenados: \n");
	printVetor(vetor, i);
	
	return 0;
}
