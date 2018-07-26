#include <stdio.h>
#include <stdlib.h>

void ins_cadeia(char string[], char string2[], int indice);

int main(){
	int indice;
	char string[100], string2[100];
	
	printf("String 1 -> ");
	scanf("%[^\n]s", &string);
	setbuf(stdin, NULL);
	
	printf("String 2 -> ");
	scanf("%[^\n]s", &string2);
	setbuf(stdin, NULL);
	
	printf("Indice -> ");
	scanf("%i", &indice);
	setbuf(stdin, NULL);
	
	ins_cadeia(string, string2, indice);
	
	return 0;
}

void ins_cadeia(char string[], char string2[], int indice){
	int i = 0, j = 0, contador = 0;
	
	
	//Verifica o tamanho da string 1
	while (string[i] != '\0'){
		contador+=1;
		i++;
	}
	
	//Verifica o tamanho da string 2
	
	i = 0;
	while (string2[i] != '\0'){
		contador+=1;
		i++;
	}
	
	//Da o loop ate o tamanho das duas strings
	//se o i for maior ou igual ao indice, ele pega o indice dado e a partir dele começa a alocar  o 
	// string2 na string1, o j é o contador especifico de string2, pois se pegasse de i não daria certo pq i já
	// não está no primeiro elemento
	
	i = 0;
	while (i < contador){
		if (i >= indice){
			string[indice] = string2[j];
			indice++;
			j++;
		}
		printf("\n-> %i", i);
		i++;
	}
	
	printf("\nString -> %s", string);
}
