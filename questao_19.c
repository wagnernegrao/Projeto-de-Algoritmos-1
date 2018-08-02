#include <stdio.h>
#include <stdlib.h>
#include "questao_17_18_19.h"

int main(){
	NO *p = NULL;
	int tamanho;
	char letra;
	
	while(letra != 'x'){
		printf("\nLetra: ");
		scanf("%c%*c", &letra);
		
		if(letra != 'x'){
			ListaFim(&p, letra);
		}
	}
	tamanho = ListaCircular(&p);
	//tamanho = TamanhoDaLista(&p);
	//MostraLista(p);
	MostraListaCircular(p, tamanho);
	
	return 0;
}
