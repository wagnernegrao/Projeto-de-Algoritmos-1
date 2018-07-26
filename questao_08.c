#include <stdio.h>
#include <stdlib.h>
struct despesas {
	char nome_responsavel[100];
	int numero_apt;
	int area;
	int numero_moradores;
	float valor_mes;
};
int quantidade;
struct despesas apart[40];

void dados();
void ler_dados();
int area_total();
int area_mensalidade(int total);
void apartamento_pessoas();

int main() {
	int verdade = 1, opcao, total;
	while (verdade == 1) {
		printf("\n\nGESTAO DO CONDOMINIO\n\n");
		printf(
			" 1 - Cadastra dados\n 2 - Ler as instrucoes\n 3 - Area total do "
			"condominio\n 4 - Area total por mensalidade\n 5 - Apartamento "
			"com mais moradores\n 6 - Sair\n --> ");
		scanf("%i", &opcao);

		switch (opcao) {
		case 1:
			dados();
			break;
		case 2:
			ler_dados();
			break;
		case 3:
			total = area_total();
			break;
		case 4:
			//area_mensalidade(total);
			break;
		case 5:
			apartamento_pessoas();
			break;
		case 6:
			printf("\n\nVC FINALIZOU O PROGRAMA\n");
			verdade = 0;
			break;
		default:
			printf("\n\nVC DIGITOU VALOR INVALIDO\n\n");
			verdade = 0;
			break;
		}
	}
	return 0;
}

void dados() {
	int i;

	printf("\n\nDeseja cadastrar quanto condominos: --> ");
	scanf("%i", &quantidade);
	setbuf(stdin, NULL);

	for (i = 0; i < quantidade; i++) {

		printf("VALOR DO I: %i\n", i);

		printf("\n MORADOR %i: \n", i + 1);

		printf("\n NOME DO RESPONSAVEL: ");
		scanf("%[^\n]s", &apart[i].nome_responsavel);
		setbuf(stdin, NULL);

		printf("\n NUMERO DO APART: ");
		scanf(" %i", &apart[i].numero_apt);
		setbuf(stdin, NULL);

		printf("\n AREA DO APART: ");
		scanf("%i", &apart[i].area);
		setbuf(stdin, NULL);

		printf("\n NUMERO DE MORADORES: ");
		scanf(" %i", &apart[i].numero_moradores);
		setbuf(stdin, NULL);

		printf("\n VALOR POR MES: ");
		scanf(" %i", &apart[i].valor_mes);
		setbuf(stdin, NULL);

		system("clear");
	}
}

void ler_dados() {
	int i;

	for (i = 0; i < quantidade; i++) {
		printf("\n\n MORADOR %i: \n", i + 1);

		printf(" NOME: %s", apart[i].nome_responsavel);

		printf("\n NUMERO: %i", apart[i].numero_apt);

		printf("\n AREA: %i", apart[i].area);

		printf("\n NUMERO DE MORADORES: %i", apart[i].numero_moradores);
	}

	system("clear");
}


int area_total() {
	int i, total = 0;
	for (i = 0; i < quantidade; i++) {
		total = total + apart[i].area;
	}
	system("clear");
	printf("\n\n A area total em M2 %i\n\n\n", total);

	return total;
}


int area_mensalidade(int total) {
	int i;
	float despesa, calc, aux;

	printf("TOTAL: %i", total);

	for (i = 0; i < quantidade; i++) {
		printf("\n\n MORADOR %i:\n");

		printf("\nDespesa por mes: ");
		scanf("%f", despesa);

		aux = aux + despesa;
	}
	calc = aux / total;
	system("clear");
	printf("Despesa por apartamento: %f\n", calc);
}


void apartamento_pessoas(){
	int i, aux, morador;

	aux = apart[0].numero_moradores;

	for (i = 1; i < quantidade;i++){
		if(aux < apart[i].numero_moradores){
			aux = apart[i].numero_moradores;
			morador = i;
		}
	}
	system("clear");
	printf("O morador %s e o que tem mais pessoas com %i", apart[morador].nome_responsavel, aux);
}
