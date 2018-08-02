#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int vetor[], int tamanho){
	int i; //	Indice do vetor 
	int continua, aux; //	Condiconante de parada e variavel auxiliar
	int fim = tamanho; //	Delimitador de tamanho
	
	/* 1 - Enquanto continua for diferente de zero*/
	do{
	/* 2 - Percorre todo o vetor menos o ultimo elemento*/
		for(i = 0; i < fim-1; i++){
	/* 3 - Condicao de se o elemento atual for maior que o proximo elemento, entao ocorre a troca*/
			if(vetor[i] > vetor[i+1]){
				aux = vetor[i]; //	Variavel auxiliar recebe o elemento atual
				vetor[i] = vetor[i+1]; //	Indice atual do vetor recebe o proximo elemento
				vetor[i+1] = aux; //	O proximo indice do elemento recebe o auxiliar
			}
			
	/* 4 */
			continua = i; //	Recebe o i para variavel ser diferente de zero
			//Porem em um certo momento o i sera apenas zero, pois tera uma comparacao no vetor
		}
	/* 5 */
		fim--; //	Decrementa o tamanho do vetor
	}while (continua != 0);
}
