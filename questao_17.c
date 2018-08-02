#include <stdio.h>
#include <stdlib.h>
#include "questao_17_18_19.h"


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
