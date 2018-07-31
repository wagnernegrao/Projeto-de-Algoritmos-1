#include <stdio.h>
#include <stdlib.h>

typedef struct AdicionaNO{
	char dado;
	struct AdicionaNO *ant, *prox;
}NO;

//===========Lista Duplamente Encadeada========================
//Limpa A lista
void LimpaLista(NO **p){
	if (p != NULL){
		NO *p1 = NULL;
		while ((*p) != NULL){
			p1 = *p;
			*p = (*p)-> prox;
			free(p1);
		}
		free(p);
	}
}

//Tamanho da lista
int TamanhoDaLista(NO **p){
	int contador = 0;
	NO *p1;
	p1 = *p;
	
	if(p == NULL){
		return 0;
	}
	while (p1 != NULL){
		contador++;
		p1 = p1->prox;
	}
	return contador;
}

//Insere no inicio da lista
int InsereNoInicio(NO **p, char letra){
	NO *p1 = NULL;
	
	if (p == NULL){
		printf("\nErro");
		return 0;
	}
	p1 = (NO *)malloc(sizeof(NO));

	if (p1 == NULL){
		printf("\nErro");
		return 0;
	}
	//Lista não vazia aponta para anterior
	p1->dado = letra;
	p1->prox = (*p);
	p1->ant = NULL;
			
	if ((*p) != NULL){
		(*p)->ant = p1;
	}
	*p = p1;
	return 1;
}

//Insere no final da lista
void InsereNoFinal(NO **p, char letra){
	NO *p1 = NULL;
  	if(p == NULL){
	    printf("\nErro 1");
	    //return 0;
  	}else{
		p1 = (NO*)malloc(sizeof(NO));
		
		if(p1 == NULL){
			printf("\nErro 2");
			//return 0;
		}else{
			p1->dado = letra;
			p1->prox = NULL;
			
			if((*p) == NULL){
				p1->ant = NULL;
				*p = p1;
			}else{
				NO *p2 = NULL;
				p2 = *p;
			
				while(p2->prox != NULL){
				  p2 = p2->prox;
				}
				p2->prox = p1;
				p1->ant = p2;
		  }
		}
	}
}

//Mostra a lista com os elementos
void MostraLista(NO *p){
	while (p != NULL){
		printf("\n:> %c", p->dado);
		p = p->prox;
	}
}

//Concatenação de 2 listas encadeadas
void ConcatenacaoLista(NO **p0, NO **p1){
	NO *p3 = NULL; //Nó auxiliar
	if(p0 == NULL && p1 == NULL){
		printf("\nERRO");
	}else{
		p3 = (NO*)malloc(sizeof(NO));
		
		if(p3 == NULL){
			printf("\nERRO");
		}else{
			p3 = *p0;
			
			while(p3->prox != NULL){
				p3 = p3->prox;
			}
			
			p3->prox = (*p1);
			(*p1)->ant = p3;
		}
	}
		
}


//============Lista Encadeada==================================

void ListaFim(NO **p, char letra){
	NO *p1 = NULL, *p2 = NULL;
	p1 = *p;
	
	if (p1 == NULL){
		p1 = (NO*)malloc(sizeof(NO));
		if(p1 != NULL){
			p1->dado = letra;
			p1->prox = NULL;
			*p = p1;
		}
	}else{
		while(p1->prox != NULL){
			p1 = p1->prox;
		}

		p2 = (NO*)malloc(sizeof(NO));
		
		if(p2 != NULL){
			p2->dado = letra;
			p2->prox = NULL;
			p1->prox = p2;
		}
	}
}

int ListaCircular(NO **p){
	int contador = 1;
	NO *p1 = NULL;
	p1 = *p;
	if (p1->prox != NULL){
		p1 = p1->prox;
		contador++;
	}
	p1->prox = (*p);
	return contador;
}

void MostraListaCircular(NO *p, int tamanho){
	int contador = 0;
	while(contador < tamanho){
		printf("\n:> %c", p->dado);
		p = p->prox;
		contador++;
	}
}
