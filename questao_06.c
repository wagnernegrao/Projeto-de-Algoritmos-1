#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct{
	char nome[100];
	char sexo;
	int idade;
}Cadastro;

Cadastro pessoas[TAM];

int main(){
	int i, cont_m = 0, cont_f = 0;

	for(i = 0; i < TAM; i++){
		printf("\nDigite Seu nome: ");
		scanf("%s", &pessoas[i].nome);
		getchar();

		printf("\nDigite seu sexo [m] ou [f]: ");
		scanf("%c", &pessoas[i].sexo);
		getchar();

		printf("\nDigite sua idade: ");
		scanf("%i", &pessoas[i].idade);
		getchar();
	}

	for(i = 0; i < TAM; i++){
		if(pessoas[i].sexo == 'm'){
			cont_m++;
		}else if(pessoas[i].sexo == 'f'){
			cont_f++;
		}
	}

	printf("\nCadastros do sexo masculino: %i || Cadastro do sexo feminino: %i\n", cont_m, cont_f);
	return 0;
}