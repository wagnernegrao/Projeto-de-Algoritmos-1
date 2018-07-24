#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor = 1;
	float alimentacao = 0, limpeza = 0, higiene = 0;
	char codigo;

	while(valor != 0){
		printf("Digite o codigo da mercadoria: ");
		scanf("%c*c", &codigo);
		getchar();
		printf("Digite o valor: ");
		scanf("%f", &valor);
		getchar();
		switch(codigo){
			case 'L':
				limpeza += valor;
				break;
			case 'A':
				alimentacao += valor;
				break;
			case 'H':
				higiene += valor;
				break;
		}
	}
	printf("\n\nTotal de gasto alimentacao: %.2f R$", alimentacao);
	printf("\nTotal de gasto Limpeza: %.2f R$", limpeza);
	printf("\nTotal de gasto Higiene: %.2f R$", higiene);
	printf("\nTotal de gastos geral: %.2f R$\n", (alimentacao + limpeza + higiene));
	return 0;
}