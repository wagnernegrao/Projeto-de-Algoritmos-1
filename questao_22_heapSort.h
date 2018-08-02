#include <stdio.h>
#include <stdlib.h>

//Se nao funcionar no DevC++ verificar se a variavel fim e uma palavra reservada
//void criaHeap(int vetor[], int inicio, int fim);

void criaHeap(int vetor[], int inicio, int fim){
    int pai = vetor[inicio]; // Elemento Pai
    int filho = inicio * 2 + 1; //Elemento Filho

    while(filho <= fim){ //Condicao para saber se ainda esta dentro do vetor
        if(filho < fim){
            if(vetor[filho] < vetor[filho + 1]){ //Verifica qual maior filho (esquerda < direita)
                filho = filho + 1;
            }
        }

        if(pai < vetor[filho]){ // Condicao para saber se o filho e maior que o pai, se for troca filho pelo pai
            vetor[inicio] = vetor[filho];
            inicio = filho;
            filho = 2 * inicio + 1;
        }else{
            filho = fim + 1; // Filho termina
        }
    }
    vetor[inicio] = pai; // Pega a ultima posicao analisada e coloca no pai, apos isso coloca no lugar do ultimo filho que foi copiado, devolvando ele para o lugar
}

void heapSort(int vetor[], int tamanho){
    int i, aux;

    for(i = (tamanho - 1)/2; i >= 0; i--){ // Cria heap a partir da metade do vetor até a primeira posicao dele
        criaHeap(vetor, i, tamanho - 1);
    }

    for(i = tamanho - 1; i >= 0; i--){ // Ordena todo vetor
        //Pega o maior elemento que esta no topo da arvore e coloca na posicao i, sendo i ultima posicao do vetor
        aux = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = aux;

        criaHeap(vetor, 0, i - 1); //Reestrutura toda heap
    }
}
