#include <stdio.h>
#include <stdlib.h>

void pagamento(int idade, int valor);
int main(){
	int idade, valor;
	printf("\nDigite sua idade: ");
	scanf("%i", &idade);
	getchar();
	
	printf("\nDigite o valor gasto: ");
	scanf("%i", &valor);

	pagamento(idade, valor);
	return 0;
}

void pagamento(int idade, int valor){
	if(valor > 300){
		printf("\nValor a ser pago e de %.2f R$\n", (valor-valor*0.25));

	}else if((valor <= 300 || valor == 100) && (idade > 50)){
		printf("\nValor a ser pago e de %.2f R$\n", (valor-valor*0.15));

	}else if(valor < 100){
		printf("\nValor a ser pago e de %i R$\n", valor);

	}else if((valor >= 100) && (valor <= 300)){
		printf("\nValor a ser pago e de %i R$\n", valor);
	}

}
