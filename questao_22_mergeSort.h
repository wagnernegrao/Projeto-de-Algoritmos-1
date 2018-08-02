#include <stdio.h>
#include <stdlib.h>

//Se nao funcionar no DevC++ verificar se a variavel fim e uma palavra reservada
void ordenacaoMerge(int vetor[], int inicio, int meio, int fim);

void mergeSort(int vetor[], int inicio, int fim){
/* 1 - O inicio deve ser maior que o fim, para ocorrer a ordenacao*/
  if(inicio < fim){
    int meio = (inicio + (fim - 1))/2; //   Define o meio a partir da divisao por 2

    mergeSort(vetor, inicio, meio); //  Inicia recursividade para inicio ate o meio
    mergeSort(vetor, meio+1, fim); //   Inicia recursividade para meio ate o fim
    
    ordenacaoMerge(vetor, inicio, meio, fim); //Ordena o Vetor
  }
}

void ordenacaoMerge(int vetor[], int inicio, int meio, int fim){
    int i, j, k; //   Indices dos vetore
    int esquerda = (meio - inicio) + 1; //Lado de Ordenacao
    int direita = fim - meio; //Lado de Ordenacao
    int esq[esquerda], dir[direita]; //Vetores auxiliares de ordenacao da esquerda e da direita

    //printf("\n\n---> %i Esquerda ----> %i Direita", esquerda, direita);
    /*2*/
    for(i = 0; i < esquerda; i++){ //Armazena a esquerda no vetor auxiliar
        esq[i] = vetor[inicio + i];
    }

    for(i = 0; i < direita; i++){ //Armazena a direita no vetor auxiliar
        dir[i] = vetor[meio+i+1];
    }

    /*3*/
    //Inicializa os inicides dos vetores 
    i = 0;
    j = 0;
    k = inicio; // inidice do vetor principal que esta sendo ordenado

    while( i < esquerda && j < direita){
        if(esq[i] <= dir[j]){
            vetor[k] = esq[i];
            i++;
        }else{
            vetor[k] = dir[j];
            j++;
        }
        k++;
    }

	//Elementos restantes pos ordenacao 
	while(i < esquerda){
		vetor[k] = esq[i];
		i++;
		k++;
	}

	//Elementos restantes pos ordenacao
	while(j < direita){
		vetor[k] = dir[j];
		j++;
		k++;
	}
}
