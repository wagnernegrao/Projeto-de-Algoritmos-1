#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/*
Desenvolva uma função para retornar o número de NOs de uma lista
encadeada
*/

int main(){
	NO *p = NULL;
	char letra;
	
	while (letra != 'x'){
		printf("Letra: ");
		scanf("%c%*c", &letra);
		if (letra != 'x'){
			InsereNoFinal(&p, letra);
		}
	}
	
	MostraLista(p);
	
	int x = TamanhoDaLista(&p);
	
	printf("\n\nPossui %d Nos \n", x);
	return 0;
}
