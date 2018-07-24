#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct{
	char livro[100];
	char autor[100];
	int isbn;
	float preco;
}Biblioteca;

Biblioteca biblioteca[TAM];

int main(){
	int i, busca, validacao = 1;
	
	printf("\n\nCADASTRO DE LIVROS\n\n");
	
	for(i = 0; i < TAM; i++){

		printf("\nNome do livro: ");
		scanf("%s", &biblioteca[i].livro);
		getchar();

		printf("\nNome do Autor: ");
		scanf(" %s", &biblioteca[i].autor);
		getchar();

		printf("\nISBN do livro: ");
		scanf(" %i", &biblioteca[i].isbn);
		getchar();

		printf("\nPreco do livro: ");
		scanf(" %f", &biblioteca[i].preco);
		getchar();

		printf("\n=============================\n");
	}

  	do{
  		printf("\nBuscar livro por ISBN: ");
		scanf("%i", &busca);

		for(i = 0; i < TAM; i++){
			if(busca == biblioteca[i].isbn){
				printf("\nNome do livro: %s", biblioteca[i].livro);
				printf("\nNome do autor: %s", biblioteca[i].autor);
				printf("\nISBN: %i", biblioteca[i].isbn);
				printf("\nPreco do livro: %.2f\n", biblioteca[i].preco);
	      		validacao = 0;

			}else if(validacao == 1 && i == TAM-1){
				printf("\nISBN nao encontrada\n");
	    	}
		}
		validacao = 1;
  	}while (busca != 0);
  	return 0;
}