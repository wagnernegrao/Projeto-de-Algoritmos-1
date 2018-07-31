#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/*
 Altere o código de uma lista encadeada simples para funcionar como
uma lista encadeada circular
*/

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
