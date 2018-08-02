#include <stdio.h>
#include <stdlib.h>
//#include <insertSort.h>

#define tamanho_balde 100
#define numero_balde 10

typedef struct{
    int quantidade;
    int balde[tamanho_balde];
}Bucket;


void bucketSort(int vetor[], int tamanho){
    Bucket balde_aux[numero_balde];
    int i, j, k; // Indices dos vetores

    //  Inicializa os baldes com zero
    for(i = 0; i < numero_balde; i++){
        balde_aux[i].quantidade = 0;
    }

    //  Verifica em que balde o elemento deve ficar
    for(i = 0; i < tamanho; i++){
        j = numero_balde - 1; //    Quantidade de baldes a serem utilizadas
        while(1){ //    Enquanto for verdade
            if(j < 0){ //   Condicao de menor que zero
                break;
            }
            if(vetor[i] >= j*10){ //    Condicao de em qual balde colocar os elementos
                balde_aux[j].balde[balde_aux[j].quantidade] = vetor[i]; //    Recebe no balde '0' o elemento '9', pois esta no intervalo de J
                (balde_aux[j].quantidade)++; //   Acrescenta + 1 na quantidade de elementos do balde -> balde[0] = 1 balde[1] = 2;
                break;
            }
            j--; // Decrementa o J para saber em qual intervalo de baldes o elemento deve ficar
        }
    }

    //  Ordena os baldes
    for(i = 0; i < numero_balde; i++){
        if(balde_aux[i].quantidade){
            insertSort(balde_aux[i].balde, balde_aux[i].quantidade); //   Melhor ordenacao pois os elementos ja estao pre-ordenados
        }
    }

    //  Poe os elementos do balde de volta no vetor
    i = 0;
    for(j = 0; j < numero_balde; j++){
        for(k = 0; k < balde_aux[j].quantidade; k++){ //  Para k menor que a qauntidade do balde 0,1,2,3,....
            vetor[i] = balde_aux[j].balde[k]; //    Vetor principal recebe o balde_aux[0,1,2,...].elemento[0,1,2,...]
            i++;
        }
    }
}