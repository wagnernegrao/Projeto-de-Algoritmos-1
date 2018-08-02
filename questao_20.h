#include <stdio.h>
#include <stdlib.h>

typedef struct AdicionaNO{
	char dado;
	struct AdicionaNO *ant, *prox;
}NO;

//Cria Pilha
void CriaPilha(NO **p){

	if(*p != NULL){
		*p = NULL;
	}
}

//Limpa Pilha
void LimpaPilha(NO **p){
	if (*p != NULL){
		NO *aux;
		
		while ((*p) != NULL){
			aux = *p;
			*p = (*p)->prox;
			free(aux);
		}
		free(p);
	}
}

//Tamanho da Pilha
int TamanhoPilha(NO **p){
	int contador = 0;
	NO *aux;
	
	if(*p == NULL){
		return 0;
	}
	
	aux = *p;
	
	while(aux != NULL){
		contador++;
		aux = aux->prox;
	}
	
	return contador;
}

//Verifica se a pilha está vazia ou não
int PilhaVazia(NO **p){
	if(p == NULL){
		printf("\nPilha Vazia\n");
		return 1;
	}
	if(*p == NULL){
		printf("\nPilha Vazia\n");
		return 1;
	}
	
	printf("\nPilha possui elementos\n");
	return 0;
}

//Insere elemento na pilha
int InserePilha(NO **p, char letra){
	if(*p == NULL) return 0;
	
	NO *aux = (NO*)malloc(sizeof(NO));
	
	if(aux == NULL) return 0;
	
	aux->dado = letra;
	aux->prox = (*p);
	(*p) = aux;
	
	return 1;
}

//Remove elemento na pilha
int RemovePilha(NO **p){
	if (*p == NULL) return 0;
	
	NO *aux = (NO*)malloc(sizeof(NO));
	
	if(aux == NULL) return 0;
	
	aux = *p;
	*p = aux->prox;
	free(aux);
	return 1;
}

//Consulta Elemento da pilha
int ConsultaPilha(NO **p, int indice){
	int contador = 1;
	if(*p == NULL) return 0;
	
	NO *aux;
	aux = *p;
	
	while (contador <= indice){
		aux = aux->prox;
		contador++;
	}
	printf("\n\nElemento: %c", aux->dado);
	
	return 1;
}

//Mostra os elementos da pilha
void MostraPilha(NO *p){
	while(p != NULL){
		printf("\n:> %c", p->dado);
		p = p->prox;
	}
}