#include <stdio.h>
#include <stdlib.h>
#include "stack_function.h"


int main(){
	NO *p;
	char letra;
	int t, indice, TamPilha;
	
	while (letra != 'x'){
		printf("Letra: ");
		scanf("%c%*c", &letra);

		if(letra != 'x'){
			t = InserePilha(&p, letra);
			if (t == 0){
				printf("\nPilha Vazia");
				letra = 'x';
			}
		}
	}
	
	printf("\nVerifica se a pilha esta vazia ou nao: \n");
	PilhaVazia(&p);

	printf("\n\n\n===============\n\n\n");

	printf("\nMostra o elemento do indice em esquestao: \n");
	printf("\n\nIndice: "); 
	scanf("%i", &indice);
	ConsultaPilha(&p, indice);
	
	printf("\n\n\n===============\n\n\n");

	TamPilha = TamanhoPilha(&p);
	printf("Tamanho da Pilha: %i", (TamPilha - 1));

	printf("\n\n\n===============\n\n\n");

	printf("\nRemove um elemento da pilha\n");
	RemovePilha(&p);

	MostraPilha(p);
	return 0;
}


