#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/*
Sejam duas listas encadeadas, desenvolva uma função que recebe
duas listas encadeadas e retorne a lista encadeada resultante da
concatenação
*/

int main(){
	NO *p0 = NULL;
	NO *p1 = NULL;
	char letra;
	
	printf("\nP1: ");
	while(letra != 'x'){
		printf("\n:>");
		scanf("%c%*c", &letra);
		if(letra != 'x'){
			InsereNoFinal(&p0, letra);
		}
	}
	
	letra = 'm';
	
	printf("\nP2: ");
	while(letra != 'x'){
		printf("\n:>");
		scanf("%c%*c", &letra);
		if(letra != 'x'){
			InsereNoFinal(&p1, letra);
		}
	}
	
	ConcatenacaoLista(&p0, &p1);
	
	MostraLista(p0);
	return 0;
}
