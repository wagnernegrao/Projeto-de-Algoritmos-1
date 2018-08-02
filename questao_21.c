#include <stdio.h>
#include <stdlib.h>
typedef struct AdicionaNO{
  char data;
  struct AdicionaNO *prox;
}NO;


void enfileirar(NO **ptrfim, char *letra){
  NO *ptmp;

  ptmp = (NO *)malloc(sizeof(NO));

  if (ptmp != NULL) {
    ptmp->data = letra;
    ptmp->prox = *ptrfim;
    *ptrfim = ptmp;
  }
}

void MostraFila(NO *p){
  while (p != NULL){
    printf("\n-> %c", p->data);
    p = p->prox;
  }
}

int main(void) {
  NO *ptrfim = NULL;
  char carac;

  while (carac != 'x'){
    printf("\nLetra: ");
    scanf("%c%*c", &carac);
    if (carac != 'x'){
      enfileirar(&ptrfim, carac);
    }

  }
  
  MostraFila(ptrfim);
  
  return 0;
}