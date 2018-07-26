#include <stdio.h>
#include <stdlib.h>

void rmv_cadeia(char string[], int indice, int quant);

int main(){
	int indice, quant;
	char string[100];
	
	printf("String -> ");
	scanf("%[^\n]s", &string);
	setbuf(stdin, NULL);
	
	printf("Indice -> ");
	scanf("%i", &indice);
	setbuf(stdin, NULL);
	
	printf("Quantidade removida -> ");
	scanf("%i", &quant);
	setbuf(stdin, NULL);
	
	rmv_cadeia(string, indice, quant);
	return 0;
}

void rmv_cadeia(char string[], int indice, int quant){
	int i = 0;
	char sub_string[100];
	//printf("\nResulta em -> ");
	
	//Passo o solicitado para minha auxiliar 
	while (i < quant){
		//printf("%c", string[indice-1]);
		sub_string[i] = string[indice-1];
		i++;
		indice++;
	}
	
	// Zero todos os elementos de string
	
	i = 0;
	while (string[i] != '\0'){
		string[i] = NULL;
		i++;
	}
	
	//Printa o vetor princial já modificado
	i = 0;
	while (i < quant){
		string[i] = sub_string[i];
		i++;
	}
	
	printf("\nResulta em -> %s", string);
}
