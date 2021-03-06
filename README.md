# Projeto de Algoritmos 1

## Programação em linguagem C


### Questão 01 - Escreva um programa em que o usuário informe a idade de um cliente e o valor de sua conta. O programa então deve calcular o total a ser pago de acordo com a seguinte tabela:

| Valor da conta | Condição	| Desconto |
| -------------- | -------- | -------- |
| Acima de R$300.00 |	Nenhuma	| 25% |
| Menor ou igual a R$300.00 e maior ou igual a R$100.00 | Cliente com mais de 50 anos | 15% |
| Abaixo de R$100.00 | Nenhuma	| 0 |

### Questão 02 - Escreva um programa em que o usuário informa o valor e o código de várias mercadorias vendidas em um determinado dia. Os códigos obedecem a tabela abaixo:

    'L' - limpeza
    'A' – alimentação
    'H'- higiene
    
### O programa deve então calcular e apresentar ao usuário: o total vendido naquele dia (com todos os códigos juntos) e o total vendido naquele dia em cada um dos códigos. Para encerrar a entrada de dados, digite o valor da mercadoria zero.


### Questão 03 - Escreva um programa para ler um vetor de números inteiros de 12 posições. Em seguida, o programa deve ler dois valores X e Y quaisquer correspondentes a duas posições no vetor. O programa deverá então apresentar a soma dos valores encontrados nas respectivas posições X e Y.

### Questão 04 - Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.

### Questão 05 - Defina uma estrutura para armazenar os seguintes dados de um livro: nome, autor, isbn e preço. O programa deve solicitar ao usuário o cadastramento de 10 livros. Em seguida, o programa deve solicitar ao usuário um número de ISBN e o programa deve realizar uma pesquisa nos valores cadastrado. Caso o ISBN seja encontrado, o programa deve apresentar ao usuários o outros dados do livro.

### Questão 06 - Considerando que um registro (estrutura) é um conjunto de variáveis agrupadas que permite agregar tipos de dados diferentes, faça o que se pede nos itens a seguir:

    a. Crie um registro que armazene o nome, o sexo e a idade de uma pessoa a partir de dados inseridos pelo usuário. Em seguida, exiba os dados inseridos.
    b. A partir do registro anterior, crie um vetor para cadastrar 10 indivíduos. 
    c. A partir dos dados inseridos nos registros, verifique o número de usuários do sexo masculino e feminino. Apresente o resultado

### Questão 07 -Seja um algoritmo para controlar os produtos do estoque de um supermercado. Para cada produto, tem-se os seguintes campos:
    nome: string de tamanho 15 
    setor: caracter 
    quantidade: inteiro 
    preço: real //preço por unidade do produto
    
    1. Escrever a definição da estrutura produto. 
      b) Declarar o vetor estoque do tipo da estrutura definida acima, de tamanho 100 e global.
    2. Crie um menu para:
      c) Definir um bloco de instruções para ler o vetor estoque. 
      d) Definir um bloco de instruções que receba um setor e devolva o número de diferentes produtos desse setor. 
      e) Definir um bloco de instruções que calcule e devolva o total de capital investido em produtos do supermercado. 
      f) Sair do Programa.

### Questão 08 - Seja um sistema destinado a controlar despesas e dados de um condomínio de apartamentos. Os dados de cada apartamento são armazenados em um vetor de estruturas. Para cada apartamento tem-se os seguintes dados:
    • nome (do responsável)
    • número (do apartamento)
    • área (em m2 )
    • número de moradores
    • valor (a ser pago no mês)
    
    1. Definir a estrutura acima 
      b- Declarar um vetor de estruturas (global), suponde que o condomínio tem 40 apartamentos.
    2. Crie um menu para:
      c - Escrever um bloco de instruções responsável por ler o vetor acima, exceto o campo valor. 
      d - Escrever um bloco de instruções que retorne a área total do condomínio. 
      e - Escrever um bloco de instruções que receba a área total do condomínio; leia o total de despesas do mesmo e calcule para cada apartamento o valor a ser pago no mês. Esse valor é proporcional à área do apartamento. 
      f - Fazer um bloco de instruções para imprimir os dados do apartamento que tem o maior número de moradores. Em caso de haver mais de um, imprimir todos. 
      g - Escrever um bloco de instruções para sair do programa.

### Questão 09 - Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes campos:
    Marca: string de tamanho 15
    Ano: inteiro
    Cor: string de tamanho 10
    Preço: real

    a) Escrever a definição da estrutura carro.
    b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20 e global.

    Crie um menu para:
    
    c) Definir um bloco de programa para ler o vetor vetcarros.
    d) Definir um bloco de programa que receba um preço e imprima os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido.
    e) Defina um bloco de programa que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor).
    f) Defina um bloco de programa que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço.


## Estrutura de Dados


### Questão 10 - Escreva uma função que receba dois vetores de caracteres (duas strings), seus respectivos tamanhos, e um vetor resultado. O programa então deve apresentar a concatenação das duas strings no vetor resultado.

### Questão 11 - Escreva uma função que receba uma string e informe o número de caracteres dessa string.

### Questão 12 - Escreva um programa em que o usuário informe duas cadeias de caracteres. O programa deve conter uma função para comparar as duas cadeias de caracteres. Essa função deve comparar as duas strings informadas e retornar ao usuário se elas são iguais ou não.

	Observações sobre cadeia de caracteres:
	1. Lembre-se de sempre inserir um carácter nulo ('\0') ao fim da string
	2. Não esqueça de reservar espaço na string para armazenar para o valor nulo

### Questão 13 - Escreva uma função chamada subcadeia para extrair uma porcão de caracteres de uma cadeia de caracteres. A função deve receber como parâmetros: a cadeia de caracteres fonte, o índice de inicio da subcadeia na cadeia fonte, o numero de caracteres da subcadeia e o vetor subcadeia onde devera armazenar o resultado. 
	
	Ex: subcadeia (CienciaComputacao, 3, 3, subc)

	Extrai a subcadeia nci
	Lembre-se de acrescentar o carácter nulo no final da subcadeia no vetor de subcadeia.

### Questão 14 - Escreva uma função chamada rmv_cadeia para remover um numero de caracteres de uma cadeia de caracteres. A função deve receber três argumentos: a cadeia fonte, o índice de inicio da cadeia fonte e o numero de caracteres a ser removido). 
	
	Ex: rmv_cadeia(ParaBel, 5, 3) Resulta em Bel

### Questão 15 - Escreva uma função chamada ins_cadeia para inserir um ou mais caracteres em uma outra cadeia de caracteres. Os argumentos da função devem consistir: cadeia de caracteres principal, cadeia a ser inserida e a posição na cadeia principal onde a string deve ser inserida. 
	Ex: ins_cadeia(texto, “ufpa”, 5)

### Questão 16 - Utilize as funções desenvolvidas nos exercicios anteriores (inserir, remover, encontrar) e escreva uma função chamada substituir_cadeia. Esta função deve receber como argumentos três cadeias de caracteres. Ex: subs_str(sfonte, s1, s2). A função deve substituir s1 na cadeia sfonte por s2, que possui a string s2. Para isso, a função deve chamar a função encontrar_cadeia para localizar s1 na sfonte. Então, ela deve chamar a função remover_cadeia para remover s1 da fonte. Finalmente, a função deve chamar a função inserir_cadeia para inserir s2 na localização apropriada da sfonte.


### Questão 17 - Desenvolva uma função para retornar o número de NOs de uma lista encadeada.

### Questão 18 - Sejam duas listas encadeadas, desenvolva uma função que recebe duas listas encadeadas e retorne a lista encadeada resultante da concatenação.

### Questão 19 - Altere o código de uma lista encadeada simples para funcionar como uma lista encadeada circular.


### Questão 20 - crie uma pilha e insira elementos, desenvolva uma função para verifica se possui elementos, busca por índices do elemento da pilha e mostra o elemento, remove um elemento e escreva a pilha.


### Questão 21 - Crie um fila e insira elementos e posteriormente mostre os elementos adicionados.


### Questão 22 - Crie um programa com os ordenadores:
	1 - Bubble Sort
	2 - Insertion Sort
	3 - Selecion Sort
	4 - Merge Sort
	5 - Quick Sort
	6 - Heap Sort
	7 - Counting Sort
	8 - Bucket Sort

### Questão 23 - Crie um programa para ordenar caracteres.

### Questão 24 - Ordenar cadeia de caracteres. 

### Questão 25 - Ordenar caracteres e apresenta o tempo para execução.



