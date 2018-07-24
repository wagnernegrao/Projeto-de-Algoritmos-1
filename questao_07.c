#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

typedef struct{
	char nome[100];
	char setor; //Apenas uma letra
	int quantidade;
	float preco
}Supermercado;

Supermercado estoque[TAM];
void CadastraProduto();
void ListarProdutos();

void ProdutoSetor(){
	int i;
	char setor;
	printf("\nDigite o nome do setor: ");
	scanf("%c", &setor);
	getchar();
	for(i = 0; i < TAM; i++){
		if(estoque[i].setor == setor){
			printf("\nNome: %s", estoque[i].nome);
			//printf("\nSetor: %c", estoque[i].setor);
			printf("\nQuantidade: %i", estoque[i].quantidade);
			printf("\nPreco: %.2f\n", estoque[i].preco);

			printf("\n\n======================\n\n");
		}
	}
}
int main(){
	int opcao = 1;

	while(opcao != 0){
		printf("\nDigite sua opcao: \n");
		printf("\n[1] - Cadastrar Produto");
		printf("\n[2] - Listar Produtos");
		printf("\n[3] - Produtos do Setor");
		printf("\n[4] - Total investido");
		printf("\n[0] - Sair\n -> ");
		scanf("%i", &opcao);
		getchar();
		
		switch(opcao){
			case 1:
				CadastraProduto();
				break;
			case 2:
				ListarProdutos();
				break;
			case 3:
				ProdutoSetor();
				break;
		}
	}
	

	return 0;
}

void CadastraProduto(){
	int i;
	printf("\n\nCADASTRO DE PRODUTOS\n\n");
	for(i = 0; i < TAM; i++){
		printf("\nNome: ");
		gets(estoque[i].nome);
		
		printf("\nSetor: ");
		scanf("%c", &estoque[i].setor);
		getchar();

		printf("\nQuantidade: ");
		scanf("%i", &estoque[i].quantidade);
		getchar();

		printf("\nPreco: ");
		scanf("%f", &estoque[i].preco);
		getchar();

		printf("\n\n======================\n\n");
	}
}

void ListarProdutos(){
	int i;
	for(i = 0; i < TAM; i++){
		printf("\nNome: %s", estoque[i].nome);
		printf("\nSetor: %c", estoque[i].setor);
		printf("\nQuantidade: %i", estoque[i].quantidade);
		printf("\nPreco: %.2f\n", estoque[i].preco);

		printf("\n\n======================\n\n");
	}
}