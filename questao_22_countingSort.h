#include <stdio.h>
#include <stdlib.h>

void countingSort(int vetor[], int tamanho){
    int i, j, k;
    int vetor_secundario[tamanho];

    for(i = 0; i < tamanho; i++){ // Seta cada elemento do vetor secundario como zero
        vetor_secundario[i] = 0;
    }

    for(i = 0; i < tamanho; i++){ 
        /*Cada elemento do vetor principal fica como indice do vetor secundario
        desta forma para cada elemento repetido do vetor principal fica somando mais 1 na posicao dele no vetor 
        
        Exemplo: elemento 4 vai ficar na posicao 4 do vetor secundario e se houver mais de 1 sera contado mais 1
        ->  vetor_secundario[4] = 2, logo vetor principal possui 2 elementos 4
        */
        vetor_secundario[vetor[i]]++; //    Soma 1 para cada elemento repetido
    }

    for(i = 0, j = 0; j < tamanho; j++){
        //  Vai percorrer todo tamanho do vetor com o indice J
        for(k =  vetor_secundario[j]; k > 0; k--){
            //  Passa o valor do indice em questao para K
            //  Vai repetir o elemento daquele indice ate que seja zero
            vetor[i] = j;
            i++;
        }
    }
}