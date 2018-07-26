#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct concessionaria{
	char marca[15];
	int ano;
	char cor[10];
	float preco;
};

int quantidade;
struct concessionaria vetcarros[20];

void ler_carro();
void compara_carro();
void nome_carro();
void busca_carro();

int main(){
	int opcao, vdd = 1;
	
	while(vdd == 1){
	  
		printf("\n 1 - Ler o Vetor Carros\n 2 - Faixa de Preco\n 3 - Verifica Marca\n 4 - Busca Carro\n 5 - Sair\n --> ");
		scanf("%i", &opcao);
	
		switch(opcao){
			case 1:
				ler_carro();
				break;
			case 2:
			  	compara_carro();
			  	break;
			case 3:
			  	nome_carro();
			  	break;
			case 4:
			  	busca_carro();
			  	break;
			case 5:
				vdd = 0;
			  	printf("\nVc saiu do programa\n\n");
			  	break;
			default:
				vdd = 0;
				printf("\nValor invalido\n");
				break;
	  }
	}
	return 0;
}


void ler_carro(){
	int i;
	
	printf("\n\nCADASTRO DE CARRO\n\n");
	printf("Quantos carros deseja cadastrar -->");
	scanf("%i", &quantidade);
	setbuf(stdin, NULL);
	
	for(i = 0; i < quantidade; i++){
	  	printf("\n\n CARRO %i: ", i+1);

		printf("\n MARCA: ");
    	scanf("%[^\n]s", &vetcarros[i].marca);
    	setbuf(stdin, NULL);
    
		printf("\n ANO: ");
	  	scanf("%i", &vetcarros[i].ano);
	  	setbuf(stdin, NULL);
	  
	  	printf("\n COR: ");
    	scanf("%[^\n]s", &vetcarros[i].cor);
    	setbuf(stdin, NULL);
    
	  	printf("\n PRECO: ");
	  	scanf("%f", &vetcarros[i].preco);
	  	setbuf(stdin, NULL);
	}

}

void compara_carro(){
  int i;
  float compara;
  printf("Qual valor a ser comparado?\n --> ");
  scanf("%f", &compara);
  
  printf("\n Os carros nessa feixa de preco sao: \n");

  for (i = 0; i < quantidade; i++){
    
    if(compara >= vetcarros[i].preco){
      printf("\n\nCARRO %i", i+1);
      
      printf("\n MARCA : %s", vetcarros[i].marca);
      printf("\n COR: %s", vetcarros[i].cor);
      printf("\n ANO: %i", vetcarros[i].ano);
    }
  }
}

void nome_carro(){
  int i;
  char nome[15];
  printf("\n NOME DA MARCA: ");
  scanf("%s", &nome);

  for (i = 0; i < quantidade; i++){
    if(strcmp(nome, vetcarros[i].marca) == 0){
    	
      printf("\n\nCARRO %i", i+1);
      
      printf("\n PRECO : %.3f", vetcarros[i].preco);
      printf("\n ANO: %i", vetcarros[i].ano);
      printf("\n COR: %s", vetcarros[i].cor);
      
    }
  }
}

void busca_carro(){
  int i, ano;
  char marca[15], cor[15];
  
  printf("\n MARCA: ");
  scanf("%s", &marca);
  setbuf(stdin, NULL);
  
  printf("\n ANO: ");
  scanf("%i", &ano);
  setbuf(stdin, NULL);
  
  printf("\n COR: ");
  scanf("%s", &cor);
  setbuf(stdin, NULL);
  
  for (i = 0; i < quantidade; i++){
    if((strcmp(marca, vetcarros[i].marca) == 0) && (ano == vetcarros[i].ano) && (strcmp(cor, vetcarros[i].cor) == 0)){
      printf("\n O preco desse carro e R$ %.3f", vetcarros[i].preco);
    }else{
      printf("\n\n Carro nao possui registo");
    }
  }
  
}
