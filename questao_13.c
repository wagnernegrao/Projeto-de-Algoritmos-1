#include <stdio.h>
#include <stdlib.h>


void sub_cadeia(char str_fonte[], int num_char, int indice, char sub_str[]);

int main(){
	char str_fonte[100], sub_str[100];
	int indice, num_char;
	
	printf("String Fonte -> ");
	scanf("%[^\n]s", &str_fonte);
	setbuf(stdin, NULL);
	
	printf("Quantidade de carcter -> ");
	scanf("%i", &num_char);
	setbuf(stdin, NULL);
	
	printf("Indice de inicio -> ");
	scanf("%i", &indice);
	
	sub_cadeia(str_fonte, num_char, indice, sub_str);

	return 0;
}

void sub_cadeia(char str_fonte[], int num_char, int indice, char sub_str[]){
	int i;
	for (i = 0; i < num_char; i++){
		sub_str[i] = str_fonte[indice];
		indice++;
	}
	
	printf("\n\nString Final -> %s", sub_str);
}