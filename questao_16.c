#include <stdio.h>
#include <stdlib.h>

void substituir_cadeia(char str_fonte[], char str_s1[], char str_s2[]){
  int vet[100];
  encontra_string(str_fonte, str_s1, str_s2);
  remover_string(str_fonte, str_s1, str_s2);
  inserir_string(str_fonte, str_s1, str_s2);
}

int main(void) {
  char str_fonte[100],str_s1[100], str_s2[100];
  
  printf("String Fonte -> ");
  scanf("%[^\n]s", &str_fonte);
  setbuf(stdin, NULL);
  
  printf("String S1 -> ");
  scanf("%[^\n]s", &str_s1);
  setbuf(stdin, NULL);
  
  printf("String S2 -> ");
  scanf("%[^\n]s", &str_s2);
  setbuf(stdin, NULL);
  
  substituir_cadeia(str_fonte,str_s1, str_s2);
  return 0;
}


void encontra_string(char str_fonte[], char str_s1[], char str_s2[]){
	int i = 0, j = 0, cont;
	while(str_s1[i] != '\0'){
    	i++;
 	}
  	cont = i;
  	i = 0;
  	while(str_fonte[i] != '\0'){
    	if(str_fonte[i] == str_s1[j]){
     		j++;
    	}
   		i++;
  	}
  
  	if (j == cont){
    	printf("\n\nString S1 esta contido em String Fonte");
  	}else{
    	printf("\n\nString S1 nao esta contido em String Fonte");
  	}
}

void remover_string(char str_fonte[], char str_s1[], char str_s2[]){
  	int i = 0, j = 0;
  	/*
	As comparações seguidas ocorrem para que uma letra seja lida antes da palavra desejada
  	como por exemplo wagner felidre negrao, irei substituir negrao, por wagner as letras "ne"
  	seriam lidas pelo fato de possuir mesmo caracteres mas não seria a palavra, desta forma tal 
  	comparação serve para que isso não ocorra.
  	*/
  while (str_fonte[i] != '\0'){
    	if(str_s1[j] == str_fonte[i]){
    		if (str_s1[j+1] == str_fonte[i+1]){
    			if(str_s1[j+2] == str_fonte[i+2]){
    				str_fonte[i] = '_';
    				j++;
				}	
			}
    	}
    	i++;
  	}

  	i = 0;
  	printf("\n\n\nNova string -> ");
  	
  	while (str_fonte[i] != '\0'){
  		printf("%c", str_fonte[i]);
  		i++;
	}
  	
}

void inserir_string(char str_fonte[], char str_s1[], char str_s2[]){
	int i = 0, j = 0, cont_1 = 0, cont_2 = 0;
	
	while(str_s1[cont_1] != '\0'){
		cont_1++;
	}
	
	while(str_s2[cont_2] != '\0'){
		cont_2++;
	}
	printf("\n\n1 -> %i", cont_1);
	printf("\n\n2 -> %i", cont_2);
	if (cont_1 == cont_2){
		while (str_fonte[i] != '\0'){
			if (str_fonte[i] == '_'){
				str_fonte[i] = str_s2[j];
				j++;
			}
			i++;
		}
	}
	
	printf("\n\n\n -> %s", str_fonte);
}
